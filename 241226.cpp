#include <iostream>
using namespace std;
int _1193(int num)
{
	int max = 10004569;
	int n = 0;
	for (int i = 1; i < 4473; i++)
	{
		num -= i;
		if (num <= 0)
		{
			num += i;
			n = i;
			break;
		}
	}
	if (n % 2)
	{
		printf("%d/%d", n - num + 1, num);
	}
	else
	{
		printf("%d/%d", num, n - num + 1);
	}
	return 0;

}

void _1417()
{
	int n;
	cin >> n;
	int count = 0;
	int array[50] = { 0 };
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}
	while (true)
	{
		int maxIndex = 0;
		for (int j = 1; j < n; j++)
		{
			if (array[maxIndex] <= array[j])
			{
				maxIndex = j;
			}
		}
		if (!maxIndex)	break;
		array[maxIndex]--;
		array[0]++;
		count++;
	}
	printf("%d", count);
	
}

void _1996(int n)
{
	//vector ¿¬½À

}
int main()
{
	_1417();
}