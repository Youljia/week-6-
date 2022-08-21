#pragma once
#include"Node.h"
#include<iostream>
using namespace std;
class Linked_list
{
public:
	Linked_list();
	~Linked_list();
	int get_size();
	bool is_empty();
	void add(int e, int index);
	void add_front(int e);
	void add_last(int e);
	int get_data(int index);
	int get_front();
	int get_last();
	int remove(int index);
	int remove_front();
	int remove_last();
private:
	Node* dummy_head;
	int size;
};

