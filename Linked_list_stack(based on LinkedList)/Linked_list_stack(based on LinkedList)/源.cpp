#include<iostream>
#include"Linked_list_stack.h"
using namespace std;

int main()
{
	Linked_list_stack stack;
	for (int i = 0; i < 6; ++i)
		stack.push(i);
	stack.show();

	stack.pop();
	stack.show();
	return 0;
}