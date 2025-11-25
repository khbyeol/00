//39_다운캐스팅.cpp
/*
부모의 주소를 자식의 포인터에 대입 : 비정상
-> 강제로 해야 한다.
*/

#include <iostream>
using namespace std;

class Animal
{
public:
	virtual void sound() { cout << "멍멍" << endl; }
};

class Dog : public Animal
{
public:
	void swimming() { cout << "헤엄" << endl; }
};

class Cat : public Animal
{
public:
	void sound() { cout << "야옹" << endl; }
};

int main()
{
	//업캐스팅 : 고양이!
	Animal* p = new Cat;

	//다운캐스팅 
	Cat* cat = (Cat*)p;

	p->sound();			//야옹

	//다운캐스팅
	Dog* dog = (Dog*)p;
	dog->sound();
	dog->swimming();

	return 0;
}