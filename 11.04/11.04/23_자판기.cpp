//23_자판기.cpp
/*
음료수 자판기
1) 음료수 선택
2) 카드 넣기
3) 카드 꺼내기
------------------------------

음료수
음료수 자판기

*/
#include <iostream>
using namespace std;
#include <conio.h>

//추상화 과정[현실에 있는 음료수랑 동일한 음료수 정의할 수 없다.]
//			 [특정 관점에서 보겠다]
class Drink
{
private:
	string title;	//제품명
	int price;		//가격
	int count;		//판매수량

public:
	Drink(string _title, int _price, int _count) 
	{
		title = _title;
		price = _price;
		count = _count;
	}
	Drink(string _title, int _price)
	{
		title = _title;
		price = _price;
		count = 0;
	}
	~Drink() {}

public:
	string get_title() { return title; }
	int get_price() { return price; }
	int get_count() { return count; }

public:
	void add_count(int value)
	{
		count = count + value;
	}
	void add_count()
	{
		count++;
	}
	void print()
	{
		cout << title << ", ";
		cout << price << "원";
		cout << count << "개" << endl;
	}
};

class DrinkMachine
{
private:
	Drink* drinks[5];		//Drink 주소를 5개 저장하는 배열
	int total_count;		//판매개수
	int total_money;		//판매금액
	bool is_card;			//카드 투입 여부

public:
	DrinkMachine()
	{
		drinks[0] = new Drink("콜라", 1200);
		drinks[1] = new Drink("사이다", 1300);
		drinks[2] = new Drink("환타", 1500);
		drinks[3] = new Drink("암바사", 1700);
		drinks[4] = new Drink("커피", 1000);

		total_count = 0;
		total_money = 0;
		is_card = false;
	}
	~DrinkMachine()
	{
		for (int i = 0; i < 5; i++)
		{
			delete drinks[i];
		}
	}

public: 
	bool input_card()
	{
		if (is_card == true)
			return false;
		
		is_card = true;
		return true;
	}

	bool output_card()
	{
		if (is_card == false)
			return false;

		is_card = false;
		return true;
	}

	Drink* select_drink(int idx)
	{
		if (is_card == false)
			return NULL;

		if (idx < 0 || idx > 4)
			return NULL;

		Drink *sel_drink = drinks[idx];
		sel_drink->add_count();
		
		total_count++;
		total_money += sel_drink->get_price();

		return sel_drink;
	}

	void print_view()
	{
		cout << "------------------------------------------------" << endl;
		for (int i = 0; i < 5; i++)
		{
			Drink* p = drinks[i];
			printf("[%d] ", i);
			p->print();
		}
		cout << "------------------------------------------------" << endl;
		cout << "총 판매 수량" << total_count << "개" << endl;
		cout << "총 판매 금액" << total_money << "원" << endl;
		cout << "------------------------------------------------" << endl;
	}
};

int main()
{
	DrinkMachine ma;
	while (true)
	{
		system("cls");
		ma.print_view();
		cout << "[1]카드 투입 [2]카드 제거 [3]음료수 선택 [4]종료" << endl;
		char idx = _getch();	//#include <conio.h>
		if (idx == '1')
		{
			if (ma.input_card() == true)
				cout << "카드 투입 성공" << endl;
			else
				cout << "이미 카드가 존재한다." << endl;
		}
		else if (idx == '2')
		{
			if (ma.output_card() == true)
				cout << "카드 제거 성공" << endl;
			else
				cout << "카드가 없다." << endl;
		}
		else if (idx == '3')
		{
			int select;
			cout << "제품 번호를 선택하세요: ";
			cin >> select;

			Drink* pdrink = ma.select_drink(select);
			if (pdrink != NULL)
			{
				cout << pdrink->get_title() << "제품 획득" << endl;
			}
			else
			{
				cout << "제품 번호를 확인하세요" << endl;
				cout << "카드를 먼저 투입하세요" << endl;
			}
		}
		system("pause");
	}

	return 0;
}