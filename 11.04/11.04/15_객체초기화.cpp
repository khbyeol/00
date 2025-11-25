//15_객체초기화.cpp
/*
변수를 선언함과 동시에 초기화 할 수 있다.
int num = 10;

oop 캡슐화 규칙 
1) 캡슐화와 데이터 은닉
   맴버필드(데이터)는 외부의 접근을 막는다.
   이유 : 안전하게 값을 괸리하게 위해
*/

#include <iostream>
using namespace std;

struct mydate
{
private:
	int year;
	int month;
	int day;

public:
	void mydate_curdate()
	{
		year = 2025;
		month = 11;
		day = 5;
	}

	void mydate_printdate()
	{
		cout << year << "-";
		cout << month << "-";
		cout << day << endl;
	}

	void mydate_setday(int _day)
	{
		day = _day;
	}
};



int main()
{
	mydate date1 = { 2025, 11, 5 };
	date1.month = -10;



	return 0;
}