//https://www.acmicpc.net/problem/1009
#include<iostream>
#include<cmath>
using namespace std;
struct asd
{
	int a;
	int b;
};
void func(asd w)
{
	int num = 1;
	for (int i = 0; i < w.b; i++)
	{
		num = (num * w.a) % 10;
	}
	if (num == 0)
	{
		cout << 10 << endl;
		return;
	}
	cout << num << endl;
	return;
}

int main()
{
	int T = 0;
	cin >> T;
	asd* lst = new asd[T];
	for (int i = 0; i < T; i++)
	{
		cin >> lst[i].a >> lst[i].b;
	}
	for (int i = 0; i < T; i++)	func(lst[i]);

	delete[] lst;
}