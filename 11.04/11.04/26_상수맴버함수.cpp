//26_상수맴버함수.cpp
/*
상수맴버함수
- 맴버변수를 변경할 수 없다.
- 일반 맴버함수의 호출이 불가능하다
- 상수맴버함수만 호출할 수 있다.
*/
#include <iostream>
using namespace std;

class Member
{
private:
	int num;
	string name;
	string phone;

public:

	Member(int _num, string _name, string _phone)
		: num(_num), name(_name), phone(_phone)
	{
		//num = _num;
		//name = _name;
		//phone = _phone;
	}

public:

	void Print()
	{
		cout << num << "," << name << "," << phone << endl;
	}

public:
	void SetNum(int value) const //상수 맴버 함수
	{
		value = 10;			//OK
		//num = value;		//ERROR

		//TestFun2();			//ERROR ???
		TestFun1();			//OK ??
	}

	void TestFun1() const {}
	void TestFun2() { num = 100;  }
};

int main()
{
	//객체(인스턴스) 생성
	Member mem(111, "홍길동", "010-1111-1111");
	mem.Print();	//인스턴스 맴버


	return 0;
}