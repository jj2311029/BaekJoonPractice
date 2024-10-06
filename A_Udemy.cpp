#include <iostream>
using namespace std;

struct rectangle
{
	int length;
	int breath;
}r1,r2,r3;//여기에 변수 명 적으면 바로 선언 됨



int main()
{
	int list[19] = { 0 };
	for (int i : list)//이러면 하나씩 꺼내서 쓸 수 있음
	{
		printf("%d", list[i]);
	}
}