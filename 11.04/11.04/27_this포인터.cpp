//27_this포인터.cpp

/*
객체 자신의 주소를 저장하고 있는 포인터 
인스턴스맴버 메서드 호출 시 자동으로 (암뭄적으로) 전달된다.
*/
//클래스 맴버 , 인스턴스 맴버 : 객체 없이 클래스로, 객체로 사용
#include <iostream>
using namespace std;

class Sample
{
	int number;
public:
	Sample()
	{

	}
	Sample(int number) : number(number) 
	{
		this->number = number;
	}
public:
	void fun1() { cout << this << endl; }
};

int main()
{
	Sample s1;		cout << &s1 << endl;		s1.fun1();
	Sample s2;		cout << &s2 << endl;		s2.fun1();

	return 0;
}