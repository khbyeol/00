//24_생성자콜론초기화영역.cpp
/*
초기화 : 최초 값 할당(저장) 
1) 선언과 동시에				int num = 10;
2) 선언 후 대입연산을 통해		int num;	num = 10;

객체 초기화 -> 생성자 
  생성자 ( int _num )  : num(_num + 1) //1번 방식의 초기화 
  {
	num = _num + 1;		//2번 방식 초기화
  }
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

};

int main()
{
	//객체(인스턴스) 생성
	Member mem(111, "홍길동", "010-1111-1111");
	mem.Print();	//인스턴스 맴버


	return 0;
}