//member.c

#include "std.h"


Member::Member(int _number, string _name, string _phone, char _gender, int _age)
	: number(_number), name(_name), phone(_phone), gender(_gender), age(_age)
{}


int Member::get_number() const 
{
	return number;
}
string Member::get_name() const
{
	return name;
}
string Member::get_phone() const
{
	return phone;
}
char Member::get_gender() const
{
	return gender;
}
int Member::get_age() const
{
	return age;
}

void Member::set_phone(string _phone)
{
	phone = _phone;
}
void Member::set_age(int _age)
{
	age = _age;
}



void Member::print() const
{
	cout << number << ",";
	cout << name << ",";
	cout << phone << ",";
	cout << gender << ",";
	cout << age << endl;
}
void Member::println() const
{
	cout << "회원번호: " << number << endl;
	cout << "이름 : " << name << endl;
	cout << "전화번호: " << phone << endl;
	cout << "성별: " << gender << endl;
	cout << "나이: " << age << endl;
}

