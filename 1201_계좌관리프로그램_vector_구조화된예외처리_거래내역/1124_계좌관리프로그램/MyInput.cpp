//myinput.cpp
#include "std.h"

int MyInput::input_integer(string msg)
{
	int value;
	cout << msg << " : ";	cin >> value;
	return value;
}

char MyInput::input_char(string msg)
{
	char value;
	cout << msg << " : ";	cin >> value;
	return value;
}

double MyInput::input_double(string msg)
{
	double value;
	cout << msg << " : ";	cin >> value;
	return value;
}

string MyInput::input_string(string msg)
{
	string value;
	cout << msg << " : ";	cin >> value;
	return value;
}