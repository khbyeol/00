//Account.h
#pragma once

class Account
{
private:
	int number;
	string name;
	int balance;
	tm newdate;

public:
	Account(int _number, string _name, int _balance) : number(_number), name(_name), balance(_balance)
	{
		newdate = MyTime::get_CurDateTime();
	}
	Account(int _number, string _name, int _balance, tm _newdate) : number(_number), name(_name), balance(_balance), newdate(_newdate)
	{

	}

public: 
	int get_Number() const	{ return number;	}
	string get_Name() const { return name;		}
	int get_Balance() const { return balance;	}
	tm get_Newdate() const	{ return newdate;	}

public:
	virtual bool input_Money(int money)
	{
		if (money <= 0)
			return false;

		balance += money;
		return true;
	}

	bool output_Money(int money)
	{
		if (money <= 0)
			return false;

		if (money > balance)
			return false;

		balance = balance - money;
		return true;
	}

	virtual void Print() const
	{
		cout << number << ", ";
		cout << name << ", ";
		cout << balance << "원, ";
		cout << MyTime::toDateString(newdate) << ", ";
		cout << MyTime::toTimeString(newdate) << ", ";
	}

	virtual void Println() const
	{
		cout << "계좌번호: " << number << endl;
		cout << "이    름: " << name << endl;
		cout << "잔    액: " << balance << endl;
		cout << "개 설 일: " << MyTime::toDateString(newdate) << endl;
		cout << "개설시간: " << MyTime::toTimeString(newdate) << endl;
	}

};