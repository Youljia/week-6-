#include "Data.h"
# include<iostream>
# include<vector>
using namespace std;

Data::Data(int capacity)
{
	this->my_capacity = capacity;
	size = 0;
	data.resize(my_capacity);
}


//重新定义数组容量
void Data::resize(int capacity)
{
	my_capacity = capacity;
	data.resize(my_capacity);
}

//获取数组容量
int Data::get_capacity()
{
	return data.size();
}

//获取数组元素个数
int Data::get_size()
{
	return size;
}

//获取数组的第一个元素
int Data::get_first()
{
	return data[0];
}

//获取数组最后一个元素
int Data::get_last()
{
	return data[size - 1];
}

//判断数组是否为空
bool Data::judge_empty()
{
	if (size == 0)
		return true;
	else
		return false;
}

//打印数组
void Data::print_data()
{
	int i = 0;
	for (i; i < size; ++i)
		cout << data[i] << "  ";
	cout << endl;
}

//在指定位置添加一个元素
int Data::add(int i, int e)
{
	//判断指定位置是否合理
	if (check_index(i))
		return 0;
	//判断是否还有容量
	if (size >= data.size())
		resize_capacity(2 * my_capacity);
	//添加元素
	int j = size;
	for (j; j > i; --j)
		data[j] = data[j - 1];
	data[i] = e;
	size++;
}

//在数组末尾添加元素
void Data::add_last(int e)
{
	add(size, e);
}

//在数组开头添加元素
void Data::add_first(int e)
{
	add(0, e);
}

//删除指定位置的元素
int Data::delete_place(int i)
{
	//检查下标是否合理
	if (check_index(i))
		return 0;

	//删除元素
	size--;
	int j = i;
	for (j; j < size; ++j)
		data[j] = data[j + 1];
	data[size] = NULL;

	//减少容量
	if (size <= (data.size() / 2))
		resize_capacity(my_capacity / 2);
}

//删除数组第一个元素
void Data::delete_first()
{
	delete_place(0);
}

//删除数组最后一个元素
void Data::delete_last()
{
	delete_place(size - 1);
}

//删除指定元素
int Data::delete_value(int e)
{
	int i = 0;
	for (i; i < size; ++i)
	{
		if (data[i] == e)
		{
			delete_place(i);
			return 0;
		}
	}
	cout << "数组中没有该元素！" << endl;
	return 0;
}

//修改指定位置的元素
void Data::correct_place(int i, int e)
{
	data[i] = e;
}

//修改指定元素
int Data::correct_value(int x, int e)
{
	int i = 0;
	for (i; i < size; ++i)
	{
		if (data[i] == x)
		{
			correct_place(i, e);
			return 0;
		}
	}
	cout << "数组中没有该元素！" << endl;
	return 0;
}

//查找指定位置的元素
int Data::search_place(int i)
{
	if (i >= size)
	{
		cout << "该位置没有元素或者超出容量" << endl;
		return 0;
	}
	return data[i];
}

//查找指定元素的位置
int Data::search_value(int e)
{
	int i = 0;
	for (i; i < size; ++i)
	{
		if (data[i] == e)
			return i;
	}
	cout << "数组中没有该元素！" << endl;
	return 0;
}

//检查索引
bool Data::check_index(int i)
{
	if (i < 0 || i > size)
	{
		cout << "下标越界";
		return true;
	}
	return false;
}

//动态数组
void Data::resize_capacity(int new_capacity)
{
	vector <int> resize_data(new_capacity);
	for (int i = 0; i < size; ++i)
		resize_data[i] = data[i];
	data = resize_data;
}
