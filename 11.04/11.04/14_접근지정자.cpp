//14_접근지정자.cpp
/*
외부에서 맴버의 접근을 제어할 수 있다.
private		: 외부에서의 접근을 금지
protected	: ---상속구조에서---
public		: 외부에서의 접근을 허용 
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
	mydate date1;

	

	return 0;
}