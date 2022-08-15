#pragma once
# include<vector>
using namespace std;

class Data
{
public:
	Data(int capacity);
	void resize(int);
	int get_capacity();
	int get_size();
	int get_first();
	int get_last();
	bool judge_empty();
	void print_data();
	int add(int i, int e);
	void add_last(int e);
	void add_first(int e);
	int delete_place(int i);
	void delete_first();
	void delete_last();
	int delete_value(int e);
	void correct_place(int i, int e);
	int correct_value(int x, int e);
	int search_place(int i);
	int search_value(int e);


private:
	bool check_index(int i);
	void resize_capacity(int new_capacity);

private:
	int size;
	int my_capacity;
	vector <int> data;
};

