//20_실습.cpp
#include <iostream>
using namespace std;
//[MyTime : int hour, int min, int sec ]

struct MyTime
{
private:
	int hour;
	int min;
	int sec;

public:
	MyTime()
	{
		hour = 0;
		min = 0;
		sec = 0;
	}

	MyTime(int _hour, int _min, int _sec)
	{
		hour = _hour;
		min = _min;
		sec = _sec;
	}

public:
	void setHour(int _hour) { hour = _hour; }
	void setMin(int _min) { min = _min; }
	void setSec(int _sec) { sec = _sec; }
	int getHour() { return hour; }
	int getMin() { return min; }
	int getSec() { return sec; }

public:
	void Print()
	{
		cout << hour << ":" << min << ":" << sec << endl;
	}

};


int main()
{
	MyTime time1(11, 22, 33);
	time1.Print();		//11:22:33
	MyTime time2;
	time2.Print();		//0:0:0

	time2.setHour(10);
	time2.setMin(20);
	time2.setSec(30);
	time2.Print();		//10:20:30

	cout << "time1의 시 : " << time1.getHour() << endl;	//time1의 시 : 11
	cout << "time1의 분 : " << time1.getMin() << endl;	//time1의 분 : 22
	cout << "time1의 초 : " << time1.getSec() << endl;	//time1의 초 : 33
}