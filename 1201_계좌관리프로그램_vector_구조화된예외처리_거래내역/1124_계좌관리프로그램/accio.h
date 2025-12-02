//accio.h
#pragma once

class AccountIO
{
private:
	int number;
	int input;
	int output;
	int balance; 
	tm  newdate;

public:
	AccountIO(int _number, int _input, int _output, int _balance)
		:number(_number), input(_input),output(_output), balance(_balance)
	{
		newdate = MyTime::get_CurDateTime();
	}

	AccountIO(int _number, int _input, int _output, int _balance, tm _newdate)
		:number(_number), input(_input),
		 output(_output), balance(_balance), newdate(_newdate)
	{
	}

public:
	int get_number() const
	{
		return number;
	}

public:
	void Print() const
	{
		cout << number << ", ";
		cout << input << "¿ø, ";
		cout << output << "¿ø, ";
		cout << balance << "¿ø, ";
		cout << MyTime::toDateString(newdate) << ", ";
		cout << MyTime::toTimeString(newdate) << ", ";
	}
};
