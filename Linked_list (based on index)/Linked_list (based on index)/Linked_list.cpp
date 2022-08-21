#include "Linked_list.h"

//创建一个空链表（虚拟表头）
Linked_list::Linked_list()
{
	this->size = 0;
	this->dummy_head = new Node();
}

Linked_list::~Linked_list()
{
	cout << "The linked_list is releasing... ..." << endl;
	delete dummy_head;
}

//获取链表长度
int Linked_list::get_size()
{
	return size;
}

//链表是否为空
bool Linked_list::is_empty()
{
	if (size == 0)
		return true;
	return false;
}

//添加数据
void Linked_list::add(int e, int index)
{
	if (index<0 || index>size)
		throw("This index is illegal... ...");
	else
	{
		Node* prev = dummy_head;
		for (int i = 0; i < index; ++i)
			prev = prev->next;
		prev->next = new Node(e, prev->next);
		size++;
	}
}
void Linked_list::add_front(int e)
{
	add(e, 0);
}
void Linked_list::add_last(int e)
{
	add(e, size);
}

//获取数据
int Linked_list::get_data(int index)
{
	if (index<0 || index>size)
		throw("This index is illegal... ...");
	else
	{
		Node* cur = dummy_head->next;
		for (int i = 0; i < index; ++i)
			cur = cur->next;
		return cur->e;
	}
}
int Linked_list::get_front()
{
	return get_data(0);
}
int Linked_list::get_last()
{
	return get_data(size - 1);
}

//删除数据
int Linked_list::remove(int index)
{
	if (index<0 || index>size)
		throw("This index is illegal... ...");
	else
	{
		Node* prev = dummy_head;
		for (int i = 0; i < index; ++i)
			prev = prev->next;
		Node* cur = prev->next;
		prev->next = cur->next;
		size--;
		return cur->e;
	}
}
int Linked_list::remove_front()
{
	return remove(0);
}
int Linked_list::remove_last()
{
	return remove(size - 1);
}