//28_static맴버필드.cpp

/*
static int number : //클래스 맴버
					  인스턴스와 관계가 없다.
					  인스턴스 생성과 무관하다.
- 클래스 외부에 반드시 초기화 코드 구현
  main함수 호출 전에 한개 생성
- 모든 인스턴스가 **공유**하는 성질을 갖는다.
  
*/

#include <iostream>
using namespace std;

class Card
{
private:
	int number;
	char shape;
	static int width;		//클래스 맴버
	static int height;		//클래스 맴버

public:
	//인스턴스 맴버만 초기화
	Card(int number, char shape) : number(number), shape(shape) {}

public:
	//인스턴스 맴버에서 static (클래스 맴버) 사용 가능
	void Print()
	{
		cout << number << "," << shape << "," << width << "," << height << endl;
	}
};

//이때 생성
int Card::width = 200;
int Card::height = 150;


int main()
{
	cout << sizeof(Card) << endl;   //5byte -> 8byte 

	Card c1(1, 'H'); //number, shape
	Card c2(2, 'S'); //number, shape
	c1.Print();
	c2.Print();
	

	return 0;
}