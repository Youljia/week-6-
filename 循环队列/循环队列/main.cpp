#include "Loop_queue.h"
#include<iostream>
using namespace std;

int main()
{
	Loop_queue queue(5);
	for (int i = 0; i < 10; ++i)
		queue.enqueue(i);
	queue.show();

	queue.dequeue();
	queue.get_front();
	queue.show();
	return 0;
}
