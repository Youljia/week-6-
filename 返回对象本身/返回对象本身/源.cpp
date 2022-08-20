#include<iostream>
using namespace std;

class Test
{
public:
	Test(int i)
	{
		this->i = i;
	}

	Test& add(Test& another)
	{
		this->i += another.i;
		return *this;
	}

	//���ص���һ���������󣬱���Ҫ�����òſ��Ըı�
	Test cheng(Test& another)
	{
		this->i *= another.i;
		return *this;
	}

	void show()
	{
		cout << "i = " << i;
	}

	int i;
};

int main()
{
	Test t(10);
	Test t2(20);

	t.add(t2).cheng(t2).add(t2);
	t.show();

	return 0;
}