//ui.cpp
#include "std.h"

Ui::Ui()
{
}

Ui::~Ui()
{
}

void Ui::acc_insert()
{
	printf("\n[계좌 저장]\n\n");

	try
	{
		int type = MyInput::input_integer("[1]일반 [2]신용 [3]기부");
		int number = MyInput::input_integer("계좌번호");
		string name = MyInput::input_string("이름");
		int  balance = MyInput::input_integer("입금액");

		am.insert((AccType)type, number, name, balance);

		cout << "저장 성공" << endl;
	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
}

void Ui::acc_printall()
{
	printf("\n[전체 출력]\n\n");

	list<Account*> arr = am.get_accounts();
	cout << "저장개수 : " << arr.size() << endl;
	list<Account*>::iterator begin = arr.begin();
	list<Account*>::iterator end = arr.end();
	for ( ; begin != end; begin++)
	{
		Account* acc = *begin;
		acc->Print();  //다형성!!~
		cout << endl;
	}
}

void Ui::acc_select()
{
	printf("\n[계좌 검색]\n\n");

	try
	{
		int number = MyInput::input_integer("검색할 계좌 번호");
		Account* acc = am.select(number);
		acc->Println();
		cout << "---------------------------------" << endl;
		am.print_io(number); 
		cout << "---------------------------------" << endl;
	}
	catch (const char* msg)
	{
		cout << msg << endl; 
	}
}

void Ui::acc_update_input()
{
	printf("\n[계좌 입금]\n\n");

	try
	{
		int number = MyInput::input_integer("계좌번호");
		int money = MyInput::input_integer("입금액");

		am.update_input(number, money);

		cout << "입금 성공" << endl;
	}
	catch(const char* msg)
	{
		cout << msg << endl;
	}
}

void Ui::acc_update_output()
{
	printf("\n[계좌 출금]\n\n");

	try
	{
		int number = MyInput::input_integer("계좌번호");
		int money = MyInput::input_integer("출금액");

		am.update_output(number, money);
		
		cout << "출금 성공" << endl;
	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
}

void Ui::acc_delete()
{
	printf("\n[계좌 삭제]\n\n");

	try
	{
		int number = MyInput::input_integer("삭제할 계좌 번호");
		am.remove(number);
		cout << "계좌 삭제 성공" << endl;
	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
}
