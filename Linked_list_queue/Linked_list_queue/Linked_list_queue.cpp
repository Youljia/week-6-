#include"Linked_list_queue.h"
#include<iostream>
using namespace std;

//初始化一个链表队列
Linked_list_queue::Linked_list_queue()
{
	this->front = NULL;
	this->tail = NULL;
	this->size = 0;
}

//析构~~
Linked_list_queue::~Linked_list_queue()
{
	cout << "This Linked_list_queue is releasing... ..." << endl;
	delete front;
	delete tail;
	size = NULL;
	front = NULL;
	tail = NULL;
}

//获取队列元素个数
int Linked_list_queue::get_size()
{
	return size;
}
//判断队列是否为空
bool Linked_list_queue::is_empty()
{
	if (size == 0)
		return true;
	else
		return false;
}
//队尾入元素
void Linked_list_queue::enqueue(int val)
{
	if (tail == NULL)
	{
		tail = new Node(val);
		front = tail;
	}
	else
	{
		tail->next = new Node(val);
		tail = tail->next;
	}
	size++;
}
//队首出元素
int Linked_list_queue::dequeue()
{
	if (is_empty())
	{
		cout << "No node is available... ..." << endl;
		return 0;
	}
	else
	{
		Node* ret_node = front;
		front = front->next;
		ret_node->next = NULL;
		if (front == NULL)
			tail = NULL;
		size--;
		return ret_node->e;
	}
}
//查看队首元素
int Linked_list_queue::get_front()
{
	if (is_empty())
	{
		cout << "This value is not existing... ..." << endl;
		return 0;
	}
	else
		return front->e;
}
//打印队列
void Linked_list_queue::show()
{
	Node* current = front;
	cout << "Queue: front ";
	for (int i = 0; i < size; ++i)
	{
		cout << current->e;
		current = current->next;
		cout << "->";
	}
	cout << "null tail" << endl;
}
