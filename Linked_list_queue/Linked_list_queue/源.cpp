#include<iostream>
#include"Node.h"
#include"Linked_list_queue.h"
using namespace std;

int main()
{
	Linked_list_queue queue;
	for (int i = 0; i < 5; ++i)
		queue.enqueue(i);
	queue.show();
	return 0;
}