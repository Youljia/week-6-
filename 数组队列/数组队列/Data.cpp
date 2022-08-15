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


//���¶�����������
void Data::resize(int capacity)
{
	my_capacity = capacity;
	data.resize(my_capacity);
}

//��ȡ��������
int Data::get_capacity()
{
	return data.size();
}

//��ȡ����Ԫ�ظ���
int Data::get_size()
{
	return size;
}

//��ȡ����ĵ�һ��Ԫ��
int Data::get_first()
{
	return data[0];
}

//��ȡ�������һ��Ԫ��
int Data::get_last()
{
	return data[size - 1];
}

//�ж������Ƿ�Ϊ��
bool Data::judge_empty()
{
	if (size == 0)
		return true;
	else
		return false;
}

//��ӡ����
void Data::print_data()
{
	int i = 0;
	for (i; i < size; ++i)
		cout << data[i] << "  ";
	cout << endl;
}

//��ָ��λ�����һ��Ԫ��
int Data::add(int i, int e)
{
	//�ж�ָ��λ���Ƿ����
	if (check_index(i))
		return 0;
	//�ж��Ƿ�������
	if (size >= data.size())
		resize_capacity(2 * my_capacity);
	//���Ԫ��
	int j = size;
	for (j; j > i; --j)
		data[j] = data[j - 1];
	data[i] = e;
	size++;
}

//������ĩβ���Ԫ��
void Data::add_last(int e)
{
	add(size, e);
}

//�����鿪ͷ���Ԫ��
void Data::add_first(int e)
{
	add(0, e);
}

//ɾ��ָ��λ�õ�Ԫ��
int Data::delete_place(int i)
{
	//����±��Ƿ����
	if (check_index(i))
		return 0;

	//ɾ��Ԫ��
	size--;
	int j = i;
	for (j; j < size; ++j)
		data[j] = data[j + 1];
	data[size] = NULL;

	//��������
	if (size <= (data.size() / 2))
		resize_capacity(my_capacity / 2);
}

//ɾ�������һ��Ԫ��
void Data::delete_first()
{
	delete_place(0);
}

//ɾ���������һ��Ԫ��
void Data::delete_last()
{
	delete_place(size - 1);
}

//ɾ��ָ��Ԫ��
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
	cout << "������û�и�Ԫ�أ�" << endl;
	return 0;
}

//�޸�ָ��λ�õ�Ԫ��
void Data::correct_place(int i, int e)
{
	data[i] = e;
}

//�޸�ָ��Ԫ��
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
	cout << "������û�и�Ԫ�أ�" << endl;
	return 0;
}

//����ָ��λ�õ�Ԫ��
int Data::search_place(int i)
{
	if (i >= size)
	{
		cout << "��λ��û��Ԫ�ػ��߳�������" << endl;
		return 0;
	}
	return data[i];
}

//����ָ��Ԫ�ص�λ��
int Data::search_value(int e)
{
	int i = 0;
	for (i; i < size; ++i)
	{
		if (data[i] == e)
			return i;
	}
	cout << "������û�и�Ԫ�أ�" << endl;
	return 0;
}

//�������
bool Data::check_index(int i)
{
	if (i < 0 || i > size)
	{
		cout << "�±�Խ��";
		return true;
	}
	return false;
}

//��̬����
void Data::resize_capacity(int new_capacity)
{
	vector <int> resize_data(new_capacity);
	for (int i = 0; i < size; ++i)
		resize_data[i] = data[i];
	data = resize_data;
}
