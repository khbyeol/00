//19_최종코드.cpp

#include <iostream>
using namespace std;

struct MyDate
{
private:
	int year;
	int month;
	int day;

public:
	MyDate(int _year, int _month, int _day)
	{
		year = _year; 
		month = _month;
		day = _day;
	}

	MyDate()
	{
		year = 0;
		month = 0;
		day = 0;
	}

public:
	void setYear(int _year)		{ year = _year; }				//set메서드
	void setMonth(int _month)	{ month = _month; }
	void setDay(int _day)		{ day = _day; } 
	int getYear()				{ return year; }				//get메서드
	int getMonth()				{ return month; }
	int getDay()				{ return day; }

public:
	void Print()
	{
		cout << year << "-";
		cout << month << "-";
		cout << day << endl;
	}
};

int main()
{
	MyDate date1(2025,1,2);		date1.Print();
	MyDate date2;				date2.Print();

	date2.setYear(2026);
	date2.setMonth(10);
	date2.setDay(31);
	date2.Print();

	cout << "date1의 연도는 : " << date1.getYear() << endl;

	return 0;
}

//객체: 데이터와 데이터의 연산을 묶어 캡슐화한 것