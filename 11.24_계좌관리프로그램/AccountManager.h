//AccountManager.h
#pragma once

enum AccType		//열거형? 
{
	ACCOUNT = 1,
	FAITH_ACCOUNT = 2,
	CONTRI_ACCOUNT = 3
};

class AccountManager
{
private:
	MyArr accounts;		//객체 생성 및 소유 (has a)

public:
	AccountManager();
	~AccountManager();

public:
	MyArr get_accounts();

public:
	bool insert(AccType type, int number, string name, int balance);
	Account* select(int number);
	bool update_input(int number, int money);
	bool update_output(int number, int money);
	bool remove(int number);

private:
	int select_idx(int number);
};
