//membermanager.cpp
#include "std.h"

membermanager::membermanager() {}
membermanager::~membermanager() {}




bool membermanager::member_insert(int number, string name, string phone, char gender, int age)
{
	Member* pmember = new Member(number, name, phone, gender, age);

	bool b = members.push_back(pmember);
	if (b == true)
		return true;
	else
		return false;
}
Member* membermanager::member_select(int number)
{
	for (int i = 0; i < members.get_size() ; i++)
	{
		Member* pmember = (Member*)members.get_data(i);

		if ( pmember->get_number() == number )
		{
			return pmember;
		}
	}
	return NULL;

}



int membermanager::member_select_idx(int number)
{

	for (int i = 0; i < members.get_size(); i++)
	{
		Member *pmember = (Member*)members.get_data(i);

		if (pmember->get_number() == number)
		{
			return i;
		}
	}
	return -1;

}

bool membermanager::member_update(int number, string phone, int age)
{
	Member *pmember = member_select(number);

	if (pmember == NULL)
		return false;

	pmember->set_phone(phone);
	pmember->set_age(age);
	return true;
}

bool membermanager::member_delete(int number)
{
	int idx  = member_select_idx(number);
	if (idx == -1)
	{
		return false;
	}
	members.erase(idx);
	return true;
}

MyArr membermanager::get_members()
{
	return members;
}







