//Mytime.h
#pragma once

class MyTime
{
public:
	static tm get_CurDateTime()
	{
		tm temp;

		time_t t = time(nullptr);
		localtime_s(&temp, &t);

		return temp;
	}

	static string toDateString(tm t)
	{
		int year = t.tm_year + 1900;
		int month = t.tm_mon + 1;
		int day = t.tm_mday;
		
		stringstream s;
		s << year << "-" << month << "-" << day;
		return s.str();
	}

	static string toTimeString(tm t)
	{
		stringstream s;
		s << t.tm_hour << ":" << t.tm_min << ":" << t.tm_sec;
		return s.str();
	}
};