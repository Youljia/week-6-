#include "Linked_list_stack.h"

Linked_list_stack::Linked_list_stack() :stack()
{
}
//ջ����Ԫ��
void Linked_list_stack::push(int e)
{
	stack.add_front(e);
}
//ջ����Ԫ�ز�����Ԫ��ֵ
int Linked_list_stack::pop()
{
	return stack.remove_front();
}
//�鿴ջ��Ԫ��
int Linked_list_stack::peek()
{
	return stack.get_front();
}
//��ȡջ��Ԫ�ظ���
int Linked_list_stack::get_size()
{
	return stack.get_size();
}
//�ж�ջ���Ƿ�Ϊ��
bool Linked_list_stack::is_empty()
{
	return stack.is_empty();
}
//��ӡջ
void Linked_list_stack::show()
{
	cout << "Linked_list_stack   ջ��[";
	for (int i = 0; i < stack.get_size(); ++i)
	{
		cout << stack.get_data(i);
		if (i != stack.get_size() - 1)
			cout << ",";
	}
	cout << "] " << endl;
}