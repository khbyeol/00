//13_객체중심의 코드.cpp
/*
객체 중심의 프로그래밍 방식
데이터와 데이터를 연산하는 함수를 캡슐화한다.
동일한 공간에 캡슐화 되어 있기 때문에 전달하지 않고 바로 사용할 수 있다.
*/

/*
c언어의 구조체 : 데이터만 캡슐화
c++언어의 구조체 : 데이터 + 데이터연산 함수를 캡슐화
*/

#include <iostream>
using namespace std;

struct mydate
{
	int year;
	int month;
	int day;
	
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
	mydate date1;

	date1.mydate_curdate();		//mydate_curdate(&date1);
	date1.mydate_printdate();	// mydate_printdate(&date1);

	date1.mydate_setday(6);		// mydate_setday(&date1, 6);
	date1.mydate_printdate();	// mydate_printdate(&date1);

	return 0;
}