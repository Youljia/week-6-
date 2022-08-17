#include "Loop_queue.h"
#include<iostream>
using namespace std;

//����������г�ʼ��
Loop_queue::Loop_queue(int capacity)
{
	data.resize(capacity);
	front = 0;
	tail = 0;
	size = 0;
}
//��ȡ��������
int Loop_queue::get_capacity()
{
	return data.size();
}
//��ȡԪ�ظ���
int Loop_queue::get_size()
{
	return size;
}
//��ѯ�����Ƿ�Ϊ��
bool Loop_queue::is_empty()
{
	if (size == 0)
		return true;
	return false;
}
//��β����Ԫ��
void Loop_queue::enqueue(int e)
{
	//�������Ƿ��пռ�
	if (size == data.size())
		//��������
		resize(2 * data.size());
	//���Ԫ��
	data[tail] = e;
	tail = (tail + 1) % data.size();
	size++;
}
//���׳�Ԫ��
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
	//����
	if (size <= (data.size() / 4) && (data.size() / 2) != 0)
		resize(data.size() / 2);
	return e;
}
//��ȡ����Ԫ��
int Loop_queue::get_front()
{
	return data[front];
}
//��ӡ���
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
//�����Ƿ�����
bool Loop_queue::is_full()
{
	if (size == data.size())
		return true;
	return false;
}
//�Զ��н�������/����
void Loop_queue::resize(int new_capacity)
{
	vector <int> new_data (new_capacity);
	for (int i = 0; i < size; ++i)
		new_data[i] = data[(front + i) % data.size()];
	data = new_data;
	front = 0;
	tail = size;
}
