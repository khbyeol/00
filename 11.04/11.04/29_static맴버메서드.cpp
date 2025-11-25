//29_static맴버메서드.cpp
/*
인스턴스 맴버 메서드	: this 전달	-> 인스턴스 맴버 접근 가능!!
클래스 맴버 메서드		: this 전달 안됨 
-> 클래스 맴버만 접근 가능!
*/
#include <iostream>
using namespace std;

class Sample
{
	int num; 

public:
	static void s_fun1()
	{
		//num = 10;	//에러
		cout << "s_fun1()" << endl;
	}
	void fun1()
	{
		num = 10;		// this->num = 10;
		cout << "fun1()" << endl; this;
	}
};

int main()
{
	Sample::s_fun1();		//클래스 맴버

	Sample s1;
	s1.fun1();		//인스턴스 맴버
	s1.s_fun1();	//인스턴스로 클래스 맴버 호출 가능 (하지만 사용X)

	return 0;
}