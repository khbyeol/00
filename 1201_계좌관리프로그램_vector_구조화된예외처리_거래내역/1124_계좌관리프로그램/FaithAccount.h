//FaithAccount.h
#pragma once

class FaithAccount : public Account
{
public:
	FaithAccount(int _number, string _name, int _balance)
		:Account(_number, _name, (int)(_balance + _balance * 0.01))
	{
	}
	FaithAccount(int _number, string _name, int _balance, tm _newdate)
		:Account(_number, _name, (int)(_balance + _balance * 0.01), _newdate)
	{
	}

public:
	void Input_Money(int money)
	{
		int money1 = (int)(money + money * 0.01);

		Account::Input_Money(money1);
	}
};