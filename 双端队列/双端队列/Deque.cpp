#include "Deque.h"
#include<iostream>
//初始化
Deque::Deque(int capacity)
{
	data.resize(capacity);
	front = capacity / 2;
	tail = capacity / 2;
}
//查看元素个数
int Deque::get_size()
{
	return tail - front;
}
//查看队首元素
int Deque::get_front()
{
	return data[front];
}
//查看队尾元素
int Deque::get_last()
{
	return data[tail - 1];
}
//在队首添加元素
void Deque::add_front(int e)
{
	if (front == 0)
		resize(3 * data.size());
	data[front - 1] = e;
	front--;
}
//在队尾添加元素
void Deque::add_last(int e)
{
	if (tail == data.size())
		resize(3 * data.size());
	data[tail] = e;
	tail++;
}
//去除队首元素
int Deque::remove_front()
{
	int i = data[front];
	data[front] = NULL;
	front++;
	return i;
}
//去除队尾元素
int Deque::remove_last()
{
	int i = data[tail - 1];
	data[tail - 1] = NULL;
	tail--;
	return i;
}
//扩容
void Deque::resize(int n_capacity)
{
	vector <int> new_data(n_capacity);
	int i = front;
	int j = 0;
	int size = tail - front;
	for (i; i < tail; ++i)
	{
		new_data[data.size() + j] = data[i];
		++j;
	}
	front = data.size();
	tail = data.size() + size;
	data = new_data;
}
//打印输出
void Deque::show()
{
	cout << "Queue : capacity = " << data.size() << ";size = " << (tail-front) << "." << endl;
	cout << "front [";
	for (int i = front; i < tail; ++i)
	{
		cout << data[i];
		if ((i + 1) != tail )
			cout << " ,";
	}
	cout << "] tail" << endl;
}
