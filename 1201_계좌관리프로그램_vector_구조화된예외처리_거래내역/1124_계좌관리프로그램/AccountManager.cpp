//AccountManager.cpp
#include "std.h"

AccountManager::AccountManager()
{
}

AccountManager::~AccountManager()
{
}

vector<Account*> AccountManager::get_accounts()
{
	return accounts;
}

void AccountManager::insert(AccType type, int number, string name, int balance)
{
	Account* acc = NULL;
	if(type == AccType::ACCOUNT)				acc = new Account(number, name, balance);
	else if(type == AccType::FAITH_ACCOUNT)		acc = new FaithAccount(number, name, balance);
	else if(type == AccType::CONTRI_ACCOUNT)	acc = new ContriAccount(number, name, balance);
	if (acc == NULL)
		throw "계좌 생성 실패";		

	accounts.push_back(acc);	

	//저장기능(필요정보->객체생성->저장)
	AccountIO* io = new AccountIO(number, balance, 0, balance);
	acc_ios.push_back(io);
}

Account* AccountManager::select(int number)
{
	for (int i = 0; i < accounts.size(); i++)
	{
		Account* acc = (Account*)accounts[i];
		if (acc->get_Number() == number)
		{
			return acc;
		}
	}
	throw "없는 계좌번호입니다";
}

void AccountManager::print_io(int number)
{
	for (int i = 0; i < acc_ios.size(); i++)
	{
		AccountIO* io = acc_ios[i];
		if (io->get_number() == number)
		{
			io->Print();
			cout << endl;
		}
	}
}


int AccountManager::select_idx(int number)
{
	for(int i = 0; i < accounts.size(); i++)
	{
		Account* acc = (Account*)accounts[i];
		if (acc->get_Number() == number)
		{
			return i;
		}
	}
	return -1;
}

void AccountManager::update_input(int number, int money)
{
	Account* acc = select(number);
	if (acc == NULL)
		throw "없는 계좌번호 입니다";

	acc->Input_Money(money);  //다형성

	//저장기능(필요정보->객체생성->저장)
	AccountIO* io = new AccountIO(number, money, 0, acc->get_Balance());
	acc_ios.push_back(io);
}

void AccountManager::update_output(int number, int money)
{
	Account* acc = select(number);
	if (acc == NULL)
		throw "없는 계좌번호 입니다";

	acc->Output_Money(money);

	//저장기능(필요정보->객체생성->저장)
	AccountIO* io = new AccountIO(number, 0, money, acc->get_Balance());
	acc_ios.push_back(io);
}


void AccountManager::remove(int number)
{
	int idx = select_idx(number);
	if (idx == -1)
		throw "없는 계좌번호 입니다.";

	accounts.erase(accounts.begin() +idx);  //주소(이터레이터)	
}

