//12_함수중심의 코드.cpp
/*
C코드 : 함수 중심의 프로그래밍 방식
데이터와 데이터를 연산하는 함수가 분리되어 있다.
따라서 연산을 하기위해서는 필요한 데이터가 전달되어야 한다.

*/
#include <iostream>
using namespace std;

struct mydate
{
	int year;
	int month;
	int day;
};

void mydate_curdate(mydate* pdate)
{
	pdate->year = 2025;
	pdate->month = 11;
	pdate->day = 5;
}

void mydate_printdate(const mydate* pdate)
{
	cout << pdate->year << "-";
	cout << pdate->month << "-";
	cout << pdate->day << endl;
}

void mydate_setday(mydate* pdate, int day)
{
	pdate->day = day;
}

int main()
{
	mydate date1;

	mydate_curdate(&date1);
	mydate_printdate(&date1);

	mydate_setday(&date1, 6);
	mydate_printdate(&date1);

	return 0;
}