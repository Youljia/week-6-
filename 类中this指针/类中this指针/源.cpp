#include<iostream>
using namespace std;

class Test
{
public:
	Test(int i,int j)
	{
		//增加可读性，this后面是成员变量，赋值成功
		this->i = i;
		//j直接把成员变量覆盖了，所以赋值失败
		j = j;
	}

	int change(int i) const
	{
		//此时的this既是指针常量，也是常量指针
		this->i = i; 报错
		return this->i;
	}

	static void look()
	{
		//报错！不属于对象，没有this指针
		this->i = 10;
	}

	void show()
	{
		cout << i << endl;
		cout << j;
	}
private:
	int i;
	int j;
};

int main()
{
	Test t1(10, 20);
	t1.show();
	return 0;
}