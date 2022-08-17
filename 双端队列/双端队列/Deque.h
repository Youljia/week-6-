#pragma once
#include<vector>
using namespace std;
class Deque
{
public:
	Deque(int);
	void add_front(int);
	void add_last(int);
	int remove_front();
	int remove_last();
	int get_size();
	int get_front();
	int get_last();
	void show();
private:
	void resize(int);
private:
	vector <int> data;
	int front;
	int tail;
};

