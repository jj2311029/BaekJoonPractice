#include<iostream>
#include<string>
using namespace std;

unsigned long long compareVoltage(string str, bool isOm)
{
	if (str == "black")
	{
		if (isOm) return 0;
		return 1;
	}
	else if (str == "brown")
	{
		if (isOm) return 1;
		return 10;
	}
	else if (str == "red")
	{
		if (isOm) return 2;
		return 100;
	}
	else if (str == "orange")
	{
		if (isOm) return 3;
		return 1000;
	}
	else if (str == "yellow")
	{
		if (isOm) return 4;
		return 10000;
	}
	else if (str == "green")
	{
		if (isOm) return 5;
		return 100000;
	}
	else if (str == "blue")
	{
		if (isOm) return 6;
		return 1000000;
	}
	else if (str == "violet")
	{
		if (isOm) return 7;
		return 10000000;
	}
	else if (str == "grey")
	{
		if (isOm) return 8;
		return 100000000;
	}
	else if (str == "white")
	{
		if (isOm) return 9;
		return 1000000000;
	}
	else return 0;
}
int main()
{
	string a;
	string b ;
	string c ;
	getline(cin, a);
	getline(cin, b);
	getline(cin, c);
	unsigned long long num = compareVoltage(a, true) * 10 * compareVoltage(c, false) + compareVoltage(b, true) * compareVoltage(c, false);
	cout <<num  << endl;
	
}
