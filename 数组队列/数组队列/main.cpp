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
		cout << "队列为空！" << endl;

	cout << "首个元素为" << queue.get_front() << endl;
	cout << "元素个数为" << queue.get_size() << endl;
}