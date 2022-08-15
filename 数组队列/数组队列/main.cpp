#include<iostream>
#include"Data.h"
#include"data_queue.h"
using namespace std;

int main()
{
	data_queue queue(10);

	for (int i = 0; i < 5; ++i)
		queue.enqueue(i);

	queue.show();

	queue.dequeue();
	queue.show();

	if (queue.is_empty())
		cout << "����Ϊ�գ�" << endl;

	cout << "�׸�Ԫ��Ϊ" << queue.get_front() << endl;
	cout << "Ԫ�ظ���Ϊ" << queue.get_size() << endl;
}