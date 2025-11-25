//AccountManager.cpp
#include "std.h"

AccountManager::AccountManager() {}

AccountManager::~AccountManager() {}

MyArr AccountManager::get_accounts() 
{
	return accounts;			 //acounts ¾î¶»°Ô???
}

bool AccountManager::insert(AccType type, int number, string name, int balance)
{
	Account* acc = NULL;

	if (type == AccType::ACCOUNT)
		acc = new Account(number, name, balance);
	else if (type == AccType::FAITH_ACCOUNT)
		acc = new FaithAccount(number, name, balance);
	else if (type == AccType::CONTRI_ACCOUNT)
		acc = new ContriAccount(number, name, balance);

	bool b = accounts.push_back(acc);
	if (b == true)
		return true;
	else
		return false;
}

Account* AccountManager::select(int number)
{
	for (int i = 0; i < accounts.get_size(); i++)
	{
		Account* acc = (Account*)accounts[i];		

		if (acc->get_Number() == number)
		{
			return acc;
		}
	}
	return NULL;

}

int AccountManager::select_idx(int number)
{

	for (int i = 0; i < accounts.get_size(); i++)
	{
		Account* acc = (Account*)accounts[i];

		if (acc->get_Number() == number)
		{
			return i;
		}
	}
	return -1;


}

bool AccountManager::update_input(int number, int money)
{
	Account* acc = select(number);

	if (acc == NULL)
		return false;

	return acc->input_Money(money);
}

bool AccountManager::update_output(int number, int money)
{
	Account* acc = select(number);

	if (acc == NULL)
		return false;

	return acc->output_Money(money);
}

bool AccountManager::remove(int number)
{
	int idx = select_idx(number);
	if (idx == -1)
	{
		return false;
	}
	return accounts.erase(idx);
}







