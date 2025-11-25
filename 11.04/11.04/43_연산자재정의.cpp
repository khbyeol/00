//43_연산자재정의.cpp
/*
비교연산자 재정의( ==, ....)
*/
#include <iostream>
using namespace std;

class MyTime
{
private:
	int hour;
	int min;
	int sec;

public:

	MyTime(int _hour, int _min, int _sec)
	{
		hour = _hour;
		min = _min;
		sec = _sec;
	}

public:
	void Print()
	{
		cout << hour << ":" << min << ":" << sec << endl;
	}

	bool equalse(const MyTime& t)
	{
		if (hour == t.hour && min == t.min && sec == t.sec)
			return true;
		else
			return false;
	}

	bool operator==(const MyTime& t)
	{
		if (hour == t.hour && min == t.min && sec == t.sec)
			return true;
		else
			return false;
	}

};


int main()
{
	MyTime t1(11, 22, 33);	t1.Print();
	MyTime t2(11, 22, 33);  t2.Print();
	MyTime t3(22, 22, 22);	t3.Print();

	if (t1 == t2) //t1.operator==(t2)			//if (t1.equalse(t2) == true )
		cout << "동일시간" << endl;
	else
		cout << "다른시간" << endl;

	return 0;
}
