//25_상수맴버필드.cpp
/*
맴버필드 : 멤버데이터 
- 변수맴버 : int num
- 상수맴버 : const int NUM;		반드시 콜론 초기화 영역에서 초기화 처리
*/
#include <iostream>
using namespace std;

class Member
{
private:
	const int num;		//상수 맴버필드(생성과 동시에 초기화)
	string name;
	string phone;

public:

	Member(int _num, string _name, string _phone) : num(_num), name(_name), phone(_phone)
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

};

int main()
{
	//객체(인스턴스) 생성
	Member mem(111, "홍길동", "010-1111-1111");
	mem.Print();	//인스턴스 맴버


	return 0;
}