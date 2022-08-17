#include "Loop_queue.h"
#include<iostream>
using namespace std;

//传入参数进行初始化
Loop_queue::Loop_queue(int capacity)
{
	data.resize(capacity);
	front = 0;
	tail = 0;
	size = 0;
}
//获取队列容量
int Loop_queue::get_capacity()
{
	return data.size();
}
//获取元素个数
int Loop_queue::get_size()
{
	return size;
}
//查询队列是否为空
bool Loop_queue::is_empty()
{
	if (size == 0)
		return true;
	return false;
}
//队尾插入元素
void Loop_queue::enqueue(int e)
{
	//检查队列是否还有空间
	if (size == data.size())
		//进行扩容
		resize(2 * data.size());
	//添加元素
	data[tail] = e;
	tail = (tail + 1) % data.size();
	size++;
}
//队首出元素
int Loop_queue::dequeue()
{
	if (is_empty())
	{
		throw"This queque is empty!";
		return 999999910;
	}
	int e = data[front];
	data[front] = NULL;
	front = (front + 1) % data.size();
	size--;
	//缩容
	if (size <= (data.size() / 4) && (data.size() / 2) != 0)
		resize(data.size() / 2);
	return e;
}
//获取队首元素
int Loop_queue::get_front()
{
	return data[front];
}
//打印输出
void Loop_queue::show()
{
	cout << "Queue : capacity = " << data.size() << ";size = " << size << "." << endl;
	cout << "front [";
	for (int i = 0; i < size; ++i)
	{
		cout << data[(front + i) % data.size()];
		if ((i+1)!=size)
			cout << " ,";
	}
	cout << "] tail" << endl;
}
//队列是否已满
bool Loop_queue::is_full()
{
	if (size == data.size())
		return true;
	return false;
}
//对队列进行扩容/缩容
void Loop_queue::resize(int new_capacity)
{
	vector <int> new_data (new_capacity);
	for (int i = 0; i < size; ++i)
		new_data[i] = data[(front + i) % data.size()];
	data = new_data;
	front = 0;
	tail = size;
}
