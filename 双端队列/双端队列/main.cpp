#include<iostream>
#include"Deque.h"
using namespace std;

int main()
{
	Deque queue(5);
	for (int i = 0; i < 2; ++i)
		queue.add_last(i);
	queue.show();

	queue.add_front(9);
	queue.show();
	return 0;
}
