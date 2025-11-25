//membermanager.h
#pragma once

class membermanager
{
private:
	MyArr members;		//按眉 积己 棺 家蜡 (has a)

public:
	membermanager();
	~membermanager();

public:
	MyArr get_members();

public:
	bool member_insert(int number, string name, string phone, char gender, int age);
	Member* member_select(int number);
	bool member_update(int number, string phone, int age);
	bool member_delete(int number);
	
private:
	int member_select_idx(int number);
};

