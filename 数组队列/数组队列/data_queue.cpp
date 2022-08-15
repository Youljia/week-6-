#include "data_queue.h"

//初始化数组
data_queue::data_queue(int capacity) :m_data(capacity)
{

}
//展示队列
void data_queue::show()
{
	m_data.print_data();
}
//队尾入元素
void data_queue::enqueue(int x)
{
	m_data.add_last(x);
}

//队首出元素
int data_queue::dequeue()
{
	int data_first = m_data.get_first();
	m_data.delete_first();
	return data_first;
}

//查看队首元素不删除
int data_queue::get_front()
{
	return m_data.get_first();
}

//获取队列中元素个数
int data_queue::get_size()
{
	return m_data.get_size();
}

//判断队列是否为空
bool data_queue::is_empty()
{
	return m_data.judge_empty();
}
