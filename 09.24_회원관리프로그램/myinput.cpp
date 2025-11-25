//myinput.cpp
#include "std.h"


int Myinput::input_integer(string msg)
{
	int value;
	cout << msg << ":";		 cin >> value;
	return value;
}
char Myinput::input_char(string msg)
{
	char value;
	cout << msg << ":";		 cin >> value;
	return value;
}
double Myinput::input_double(string msg)
{
	double value;
	cout << msg << ":";		 cin >> value;
	return value;

}
string Myinput::input_string(string msg)
{
	string value;
	cout << msg << ":";		 cin >> value;
	return value;

}