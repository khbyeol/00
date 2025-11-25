//member.h
#pragma once


class Member
{
private:

	int number;				//회원번호
	string name;			//이름
	string phone;			//전화번호
	char gender;			//성별
	int age;				//나이

public:
	Member(int _number, string _name, string _phone, char _gender, int _age);

public:
	int get_number() const;
	string get_name() const;
	string get_phone() const;
	char get_gender() const;
	int get_age() const;

	void set_phone(string _phone);
	void set_age(int _age);

	void print() const;
	void println() const;

};