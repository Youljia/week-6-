#include "data_queue.h"

//��ʼ������
data_queue::data_queue(int capacity) :m_data(capacity)
{

}
//չʾ����
void data_queue::show()
{
	m_data.print_data();
}
//��β��Ԫ��
void data_queue::enqueue(int x)
{
	m_data.add_last(x);
}

//���׳�Ԫ��
int data_queue::dequeue()
{
	int data_first = m_data.get_first();
	m_data.delete_first();
	return data_first;
}

//�鿴����Ԫ�ز�ɾ��
int data_queue::get_front()
{
	return m_data.get_first();
}

//��ȡ������Ԫ�ظ���
int data_queue::get_size()
{
	return m_data.get_size();
}

//�ж϶����Ƿ�Ϊ��
bool data_queue::is_empty()
{
	return m_data.judge_empty();
}
