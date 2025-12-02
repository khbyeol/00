//AccountManager.h
#pragma once

enum AccType
{
	ACCOUNT	= 1,
	FAITH_ACCOUNT = 2,
	CONTRI_ACCOUNT = 3
};

class AccountManager
{
private:
	list<Account*> accounts;  //객체 생성 및 소유(has a)
	vector<AccountIO*> acc_ios; //저장(계좌생성,입금,출금),검색(계좌검색)

public:
	AccountManager();
	~AccountManager();

public:
	list<Account*> get_accounts();

public:
	void insert(AccType type, int number, string name, int balance);
	Account* select(int number);
	void update_input(int number, int money);
	void update_output(int number, int money);
	void remove(int number);

	void print_io(int number);

private:
	int select_idx(int number);
};


