//ContriAccount.h
#pragma once

class ContriAccount : public Account
{
private:
	int contribution;	//기부금 총액

public:

	ContriAccount(int _number, string _name, int _balance) : Account(_number, _name, (int)(_balance - _balance * 0.01)) , contribution((int)(_balance * 0.01))
	{

	}
	ContriAccount(int _number, string _name, int _balance, tm _newdate) : Account(_number, _name, (int)(_balance - _balance * 0.01), _newdate) , contribution((int)(_balance * 0.01))
	{

	}

public:
	int get_ContriBution() const { return contribution; }

public:
	bool input_Money(int money)
	{
		int money1 = (int)(money - money * 0.01);

		bool b = Account::input_Money(money1);
		if (b == true)
		{
			contribution = contribution + (int)(money * 0.01);
			return true;
		}
		else
		{
			return false;
		}
	}

	void Print() const
	{
		Account::Print();
		cout << contribution << "원, ";
	}

	void Println() const
	{
		Account::Println();
		cout << "기부금총액 : " << contribution << "원" << endl;
	}

};