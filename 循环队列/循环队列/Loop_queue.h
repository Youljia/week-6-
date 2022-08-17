#pragma once
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Loop_queue
{
public:
	Loop_queue(int);
	int get_capacity();
	int get_size();
	bool is_empty();
	void enqueue(int);
	int dequeue();
	int get_front();
	void show();
private:
	bool is_full();
	void resize(int);
private:
	vector <int> data;
	int front;
	int tail;
	int size;
};

