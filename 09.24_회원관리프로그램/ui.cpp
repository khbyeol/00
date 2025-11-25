//ui.cpp

#include "std.h"

Ui:: Ui() {}
Ui::~Ui() {}

void Ui::member_insert()
{
	printf("\n[회원 저장]\n\n");
	int number		= Myinput::input_integer("회원번호");
	string name		= Myinput::input_string("회원이름");
	string phone	= Myinput::input_string("전화번호");
	char gender		= Myinput::input_char("성별(m/f)");
	int age			= Myinput::input_integer("나이");
	
	bool b = mm.member_insert(number, name, phone, gender, age);
	if (b == true)
		cout << "저장 성공" << endl;
	else
		cout << "저장 실패" << endl;
}

void Ui::member_printall()
{
	printf("\n[전체 출력]\n\n");

	MyArr arr =	mm.get_members();
	cout << "저장개수 : " << arr.get_size() << endl;
	for (int i = 0; arr.get_size(); i++)
	{
		Member* pmember = (Member*)arr.get_data(i);
		pmember->print();
	}


}

void Ui::member_select()
{
	int number = Myinput::input_integer("검색할 회원번호");

	Member* pmember = mm.member_select(number);

	if (pmember != NULL)
	{
		pmember->println();
	}
	else
	{
		cout << "없는 회원 번호" << endl;
	}
}

void Ui::member_update()
{
	printf("\n[회원 수정(전화번호, 나이)]\n\n");


	int number = Myinput::input_integer("검색할 회원번호");
	string phone = Myinput::input_string("변경할 전화번호");
	int age = Myinput::input_integer("변경할 나이");

	Member* pmember = mm.member_select(number);

	if (pmember != NULL)
	{
		pmember->set_phone(phone);
		pmember->set_age(age);

		cout << "회원 정보 수정 완료" << endl;
	}
	else
	{
		cout << "없는 회원 번호" << endl;
	}

}

void Ui::member_delete()
{
	printf("\n[회원 삭제]\n\n");

	int number = Myinput::input_integer("검색할 회원 번호");

	Member* pmember = mm.member_select(number);

	bool b = mm.member_delete(number); 

	if (b != NULL)
	{
		cout << "회원 삭제 성공" << endl;
	}
	else
	{
		cout << "회원 삭제 실패" << endl;
	}

}