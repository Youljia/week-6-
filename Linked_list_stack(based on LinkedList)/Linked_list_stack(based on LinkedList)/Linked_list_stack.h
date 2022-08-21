#pragma once
#include"Linked_list.h"
class Linked_list_stack
{
public:
	Linked_list_stack();
	void push(int);
	int pop();
	int peek();
	int get_size();
	bool is_empty();
	void show();
private:
	Linked_list stack;
};

