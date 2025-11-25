//35_다형성.cpp

/*
------------------------- 상속 ----------------------------
1) 부모가 있다. 자식이 부모의 맴버를 물려받고 확장

2) 강아지와 고양이의 *공통 맴버*가 있다.

동	물(소리내기)
- 강아지(수영하기)
- 고양이()

*/


#include <iostream>
using namespace std;

class Animal
{
public: 
	void sound() {}
};

class Dog : public Animal
{
public:
	void swimming() {}
};

class Cat : public Animal
{

};

int main() 
{
	Dog dog1;
	dog1.sound();
	dog1.swimming();

	Cat cat1;
	cat1.sound();

	return 0;
}