#include<iostream>
using namespace std;

class Array
{
public:
	Array(int len)
	{
		this->len = len;
		space = new int[len];
		size = 0;
	}

	//Éî¿½±´
	Array(Array& another)
	{
		this->len = another.len;
		this->size = another.size;
		this->space = new int[len];
	}

	~Array()
	{
		cout << "is releasing... ..." << endl;
		if (space != NULL)
		{
			delete[]space;
			space = NULL;
			len = NULL;
		}
	}

	void set_data(int e)
	{
		space[size] = e;
		size++;
	}

	int get_data(int index)
	{
		return space[index];
	}

	int get_size()
	{
		return size;
	}
	
	void show()
	{
		cout << "Array:[";
		for (int i = 0; i < size; ++i)
		{
			cout << space[i];
			if (i != size - 1)
				cout << " , ";
		}
		cout << "]" << endl;
	}

private:
	int len;
	int size;
	int* space;
};

int main()
{
	Array array(10);
	for (int i = 0; i < 8; ++i)
		array.set_data(i);
	array.show();
	return 0;
}