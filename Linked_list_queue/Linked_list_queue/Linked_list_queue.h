#pragma once
#include "Node.h"
#include<string>

class Linked_list_queue
{
public:
	Linked_list_queue();
	~Linked_list_queue();
	int get_size();
	bool is_empty();
	void enqueue(int);
	int dequeue();
	int get_front();
	void show();
private:
	Node* front;
	Node* tail;
	int size;
};

