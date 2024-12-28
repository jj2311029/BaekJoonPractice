#include <iostream>
using namespace std;

struct rectangle
{
	int length;
	int breath;
}r1,r2,r3;//여기에 변수 명 적으면 바로 선언 됨

template<class T>
class qqw
{
private:
	T a;
	T b;
public:
	qqw(T a, T b);
	T add()
	{
		T c;
		c = a + b;
		return c;
	}
};

template<class T>
qqw<T>::qqw(T a, T b)
{
	this->a = a;
	this->b = b;
}

int main()
{
	int list[19] = { 0 };
	for (int i : list)//이러면 하나씩 꺼내서 쓸 수 있음
	{
		printf("%d", list[i]);
	}
	qqw<float> ar(19.12, 5.55);
	qqw<char> br('a', 'T');
	cout << ar.add() <<"\naasd" <<br.add() << endl;
}