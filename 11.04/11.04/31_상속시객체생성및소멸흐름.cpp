//31_상속시객체생성및소멸흐릉.cpp

/*

- Parent(부모)
- Child(자식)

자식객체를 생성하면 
 [부모객체 생성 -> 자식객체 생성] => 만들어진 결과물을 자식 객체라고 부른다

자식 객체가 소멸하면 
 [자식객체 소멸 -> 부모객체 소멸]


*/
#include <iostream>
using namespace std;

//부모클래스, 기반클래스
class Parent
{
private:
	int num;
public:
	Parent()  { cout << "Parent::Parent()" << endl;}
	~Parent() { cout << "Parent::~Parent()" << endl;}
public:
	void fun1() { cout << "Parent::fun1()" << endl; }
};

//자식클래스, 파생클래스
class Child : public Parent
{
private:
	int num1;
public:
	Child() { cout << "Child::Child()" << endl; }
	~Child() { cout << "Child::~Child()" << endl; }
public:
	void fun2() { cout << "Child::fun2()" << endl; }

};

int main()
{
	Child c;		

	return 0;
}