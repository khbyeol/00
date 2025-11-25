//17_생성자와객체초기화 예제.cpp

#include <iostream>
using namespace std;

//구조체 정의 -> Member 객체 정의
struct Member
{
private:
	int number;		//회원번호
	string name;	//이름
	string phone;	//전화번호
	int age;		//나이

public:
	Member(int _number, string _name, string _phone, int _age)
	{
		number = _number;
		name = _name;
		phone = _phone;
		age = _age;
	}
	Member(int _number, string _name)
	{
		number = _number;
		name = _name;
		phone = "-";
		age = 0;
	}

public:
	void Print()
	{
		cout << number << ",";
		cout << name << ",";
		cout << phone << ",";
		cout << age << endl;
	}
};

int main()
{
	//Member member1 = { 111, "홍길동", "010-1111-1111", 10}
	Member member1(111, "홍길동", "010-1111-1111", 10);
	member1.Print();

	Member member2(222, "김길동");
	member2.Print();

	return 0;
}