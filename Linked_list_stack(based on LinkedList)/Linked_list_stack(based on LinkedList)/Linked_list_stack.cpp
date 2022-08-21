#include "Linked_list_stack.h"

Linked_list_stack::Linked_list_stack() :stack()
{
}
//栈顶入元素
void Linked_list_stack::push(int e)
{
	stack.add_front(e);
}
//栈顶出元素并返回元素值
int Linked_list_stack::pop()
{
	return stack.remove_front();
}
//查看栈顶元素
int Linked_list_stack::peek()
{
	return stack.get_front();
}
//获取栈的元素个数
int Linked_list_stack::get_size()
{
	return stack.get_size();
}
//判断栈中是否为空
bool Linked_list_stack::is_empty()
{
	return stack.is_empty();
}
//打印栈
void Linked_list_stack::show()
{
	cout << "Linked_list_stack   栈顶[";
	for (int i = 0; i < stack.get_size(); ++i)
	{
		cout << stack.get_data(i);
		if (i != stack.get_size() - 1)
			cout << ",";
	}
	cout << "] " << endl;
}