//37_업캐스팅.cpp

/*
------------------ 업캐스팅 -------------------------
업		: 방향 (자식 -> 부모)
캐스팅	: 형변환

자식의 주소를 부모의 포인터에 대입할 수 있다.
*/


#include <iostream>
using namespace std;

class Animal
{
public:
	void sound() { cout << "멍멍" << endl; }
};

class Dog : public Animal
{
public:
	void swimming() {}
};

class Cat : public Animal
{
public:
	void sound() { cout << "야옹" << endl; }
};

int main()
{
	Dog dog1;
	Dog* dog2 = new Dog;	//Dog* = Dog*
	delete dog2;
	
	//업캐스팅
	Animal* ani1 = new Dog;	//Animal* = Dog*
	Animal* ani2 = new Cat; //Animal* = Cat*

	//여러 종류의 동물들을 관리하고 싶다면? 
	//업캐스팅 => 하나의 배열을 사용해서 관리가 가능!
	Animal* animals[5];
	animals[0] = new Dog;
	animals[1] = new Cat;
	animals[2] = new Dog;
	animals[3] = new Cat;
	animals[4] = new Dog;

	//모든 동물들이 소리를 낸다
	for (int i = 0; i < 5; i++)
	{
		Animal* ani = animals[i];	//형식이 중요 컴파일러가 형식을 봄
		ani->sound();
	}

	return 0;
}