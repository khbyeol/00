//Account.h
#pragma once

class Account
{
private:
	int number;
	string name;
	int balance;
	tm  newdate;

public:
	Account(int _number, string _name, int _balance)
		:number(_number), name(_name), balance(_balance)
	{
		newdate = MyTime::get_CurDateTime();
	}
	Account(int _number, string _name, int _balance, tm _newdate)
		:number(_number), name(_name), balance(_balance), newdate(_newdate)
	{

	}

public:
	int get_Number() const	{ return number;	}
	string get_Name() const { return name;		}
	int get_Balance() const { return balance;   }
	tm  get_NewDate() const { return newdate;   }

public:
	virtual void Input_Money(int money)
	{
		if (money <= 0)
			throw "잘못된 금액이 전달";

		balance = balance + money; 		
	}

	void Output_Money(int money)
	{
		if (money <= 0)
			throw "잘못된 금액이 전달";

		if (money > balance)
			throw "잔액 부족";

		balance = balance - money;		
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
		cout << "계좌번호 : " << number << endl;
		cout << "이    름 : " << name << endl;
		cout << "잔    액 : " << balance << endl; 
		cout << "개 설 일 : " << MyTime::toDateString(newdate) << endl;
		cout << "개설시간 : " << MyTime::toTimeString(newdate) << endl;
	}
};