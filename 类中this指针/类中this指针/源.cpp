#include<iostream>
using namespace std;

class Test
{
public:
	Test(int i,int j)
	{
		//���ӿɶ��ԣ�this�����ǳ�Ա��������ֵ�ɹ�
		this->i = i;
		//jֱ�Ӱѳ�Ա���������ˣ����Ը�ֵʧ��
		j = j;
	}

	int change(int i) const
	{
		//��ʱ��this����ָ�볣����Ҳ�ǳ���ָ��
		this->i = i; ����
		return this->i;
	}

	static void look()
	{
		//���������ڶ���û��thisָ��
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