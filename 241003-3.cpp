#include <iostream>
#include <string>
using namespace std;

//https://www.acmicpc.net/problem/1362

struct message {
	char msg1;
	int msg2;
};
int growPet(int o, int w)
{
	float average = o;
	float now = w;
	message* asd = new message[1000];
	asd[0].msg1 = ' ';
	asd[0].msg2 = 1;
	int i = 1;
	while (asd[i-1].msg1 != '#' && asd[i-1].msg2 != 0)
	{
		cin >> asd[i].msg1 >> asd[i].msg2;
		i++;
	}
	for (int j = 1; j < i + 1; j++)
	{
		if (asd[j].msg1 == 'F')
		{
			now += asd[j].msg2;
		}
		else if (asd[j].msg1 == 'E')
		{
			now -= asd[j].msg2;
		}
	}
	delete[] asd;

	if (now > average * 0.5f && now < average * 2.0f)
		return 1;
	else if (now <= 0)
		return 2;
	else
		return 3;
}
int main()
{
	int o, w;
	int i = 0;
	int result[100]{ 0 };
	bool isPlay = true;
	while (true)
	{
		cin >> o >> w;
		if (o == 0 && w == 0)
		{
			isPlay=false;
			continue;
		}
		result[i]=growPet(o, w);
		i++;
	}
	for (int j = 0; j < i; j++)
	{
		if (result[j] == 1)
			std::cout << ":-)" << endl;
		else if (result[j] == 2)
			std::cout << "RIP" << endl;
		else if (result[j] == 3)
			std::cout << ":-(" << endl;
	}
	return 0;
}