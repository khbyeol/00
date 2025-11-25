//32_상속시객체초기화.cpp

/*
객체 초기화 -> 생성자 
 - 자신의 맴버필드 초기화는 자신의 생성자에서만 가능하다.

자식객체의 생성자에서는 부모의 어떤 생성자를 호출해서 생성될지 결정해야 한다.
 - 결정하지 않으면 부모는 인자없는 생성자가 호출된다.

사용자가 객체 생성시, 생성되는 객체가 단일객체 or 상속구조인지 모른다.

*/

#include <iostream>
using namespace std;

//부모클래스, 기반클래스
class Parent
{
private:
	int num1;
	int num2;


public:
	Parent(int n1, int n2)
	{
		num1 = n1;
		num2 = n2;
		cout << "Parent::Parent(int, int)" << endl;
	}
	Parent() { cout << "Parent::Parent()" << endl; }

};

//자식클래스, 파생클래스
class Child : public Parent
{
private:
	int num3;
	int num4;

public:
	Child(int n1, int n2, int n3, int n4) : Parent(n1, n2) //********************************
	{
		num3 = n3;
		num4 = n4;
		cout << "Child::Child(int, int, int, int)" << endl; 
	}

	Child() 
		: Parent(10, 20) //*********************
	{
		cout << "Child::Child()" << endl;
	}
};

int main()
{
	Child c;



	return 0;
}