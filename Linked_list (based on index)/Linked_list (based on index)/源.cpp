#include<iostream>
#include"Node.h"
#include"Linked_list.h"
using namespace std;

int main()
{
	Linked_list linked_list;
	//Ìí¼ÓÔªËØ
	for (int i = 0; i < 5; ++i)
		linked_list.add_front(i);

	int i = linked_list.get_data(3);
	cout << i << endl;

	i = linked_list.remove(3);
	cout << i << endl;

	i = linked_list.get_data(3);
	cout << i << endl;

}