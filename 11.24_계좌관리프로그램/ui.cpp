//ui.cpp

#include "std.h"

Ui::Ui() {}
Ui::~Ui() {}

void Ui::acc_insert()
{
	printf("\n[계좌 저장]\n\n");

	int type = Myinput::input_integer("[1]일반 [2]신용 [3]기부");
	int number = Myinput::input_integer("계좌번호");
	string name = Myinput::input_string("이름");
	int balance = Myinput::input_integer("임금액");

	bool b = am.insert((AccType)type, number, name, balance);

	if (b == true)
		cout << "저장 성공" << endl;
	else
		cout << "저장 실패" << endl;
}

void Ui::acc_printall()
{
	printf("\n[전체 출력]\n\n");
	
	MyArr arr = am.get_accounts();
	cout << "저장개수 : " << arr.get_size() << endl;
	for (int i = 0; arr.get_size(); i++)
	{
		Account* acc = (Account*)arr[i];
		acc->Print();		// 다형성!!
		cout << endl;
	}


}

void Ui::acc_select()
{
	int number = Myinput::input_integer("검색할 계좌번호");

	Account* acc = am.select(number);

	if (acc != NULL)
	{
		acc->Println();
	}
	else
	{
		cout << "없는 계좌 번호" << endl;
	}
}

void Ui::acc_update_input()
{
	printf("\n[계좌 입금]\n\n");


	int number = Myinput::input_integer("계좌번호");
	int money = Myinput::input_integer("입금액");

	bool b = am.update_input(number, money);

	if (b != NULL)
	{
		cout << "입금 완료" << endl;
	}
	else
	{
		cout << "입금 실패" << endl;
	}

}

void Ui::acc_update_output()
{
	printf("\n[계좌 출금]\n\n");


	int number = Myinput::input_integer("계좌번호");
	int money = Myinput::input_integer("입금액");

	bool b = am.update_output(number, money);

	if (b != NULL)
	{
		cout << "출금 완료" << endl;
	}
	else
	{
		cout << "출금 실패" << endl;
	}

}
void Ui::acc_delete()
{
	printf("\n[계좌 삭제]\n\n");

	int number = Myinput::input_integer("삭제할 계좌 번호");

	bool b = am.remove(number);

	if (b != NULL)
	{
		cout << "계좌 삭제 성공" << endl;
	}
	else
	{
		cout << "계좌 삭제 실패" << endl;
	}

}