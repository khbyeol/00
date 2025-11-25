//41_RTTI(RunTime Type Information).cpp
//dynamic_cast



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
	void swimming() {}
};

class Cat : public Animal
{
public:
	void sound() { cout << "야옹" << endl; }
};

int main()
{
	
	
	Animal* animals[5];
	animals[0] = new Dog;
	animals[1] = new Cat;
	animals[2] = new Dog;
	animals[3] = new Cat;
	animals[4] = new Dog;
	
	cout << "모든 동물의 소리를 낸다" << endl;

	for (int i = 0; i < 5; i++)
	{
		Animal* ani = animals[i];	//형식이 중요 컴파일러가 형식을 봄
		ani->sound();
	}

	cout << "\n\n강아지만" << endl;


	for (int i = 0; i < 5; i++)
	{
		Dog* dog = dynamic_cast<Dog*>(animals[i]);
		if (dog != NULL)
			dog->sound();
	}


	return 0;
}