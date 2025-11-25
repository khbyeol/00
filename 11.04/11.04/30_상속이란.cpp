//30_상속이란.cpp
/*
 
상속 : 부모와 자식 간 관계 구성
- 부모의 맴버(데이터, 함수)들이 자식에게 상속된다.
- 자식은 부모를 확장!

*/

#include <iostream>
using namespace std;

//부모클래스, 기반클래스
class Parent
{
private:
	int num;

public:
	void fun1() { cout << "Parent::fun1()" << endl; }
};

//자식클래스, 파생클래스
class Child : public Parent
{
private:
	int num1;
public: 
	void fun2() { cout << "Child::fun2()" << endl; }

};

int main()
{
	cout << sizeof(Child) << endl;		//4 + 4

	Child c;		//객체 생성, 인스턴스 생성 ( 8byte 메모리가 만들어짐)

	c.fun1();		//부모로부터 물려받은 메서드
	c.fun2();		//자식이 확장한 메서드

	return 0;
}