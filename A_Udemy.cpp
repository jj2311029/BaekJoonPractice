#include <iostream>
using namespace std;

struct rectangle
{
	int length;
	int breath;
}r1,r2,r3;//���⿡ ���� �� ������ �ٷ� ���� ��



int main()
{
	int list[19] = { 0 };
	for (int i : list)//�̷��� �ϳ��� ������ �� �� ����
	{
		printf("%d", list[i]);
	}
}