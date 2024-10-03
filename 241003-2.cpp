#include <iostream>
#include <string>
using namespace std;

int GetWordNum(string sent)
{
	if (sent == " ") return 0;
	int i = 0;
	int num = 1;
	if (sent[0] == ' ' ) num--;
	if(sent[sent.length()-1] == ' ') num--;
	for(int i=0;i<sent.length();i++)
		if (sent[i] == ' ')
			num++;
	return num;
}
int main()
{
	string str;
	getline(cin, str);
	cout << GetWordNum(str) << endl;
}