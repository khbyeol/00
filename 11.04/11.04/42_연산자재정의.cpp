//42_연산자재정의.cpp
/*
객체도 연산자를 사용할 수 있도록 하자.
int num1 = 10;
int num2 = 20;
num1 + num2;

*/

#include <iostream>
using namespace std;

Complex operator-(const Complex c1, const Complex c2)
{
	Complex temp(c1.num1- c2.num1, c1.num2-c2.num2);
	return temp;
}


//1 + 2i
class Complex
{
private:
	int num1;
	int num2;

public:
	Complex(int _num1, int _num2) : num1(_num1), num2(_num2) {}

public:
	void Print() const
	{
		cout << num1 << "+" << num2 << "i" << endl;
	}

	Complex Add(const Complex& c)
	{
		Complex temp(num1 + c.num1, num2 + c.num2);
		return temp;
	}

	Complex operator+(const Complex& c)
	{
		Complex temp(num1 + c.num1, num2 + c.num2);
		return temp;
	}


	friend Complex operator-(const Complex c1, const Complex c2);
};

int main()
{
	Complex com1(3, 2);	com1.Print();

	Complex com2(2, 1);	com2.Print();
	

	//함수 호출과 연산자 사용은 동일하다.
	Complex com3 = com1.Add(com2);	com3.Print();

	//연산자 재정의(맴버함수형태**, 전역함수형태)
	Complex com4 = com1 + com2;		//com1.operator+(com2);
	com4.Print();					//operator+(com1, com2);

	Complex com5 = com1 - com2;		//com1.operater-(com2);
	com5.Print();					//operator-(com1,com2);

	return 0;
}