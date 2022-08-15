#pragma once
#include"Data.h"

class data_queue
{
public:
	data_queue(int capacity);
	void enqueue(int);
	int dequeue();
	int get_front();
	int get_size();
	bool is_empty();
	void show();
private:
	Data m_data;
};

