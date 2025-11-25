//40_다운캐스팅이필요한이유.cpp


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
	Dog* dog1 = new Dog;
	dog1->sound();
	dog1->swimming();

	//다운캐스팅이 필요한 이유
	//강아지가 생성이 되었지만 Animal*로 저장하고 있기 때문에
	//Dog에서 확장됨 메서드 호출이 불가능하다.
	//강제 형변환 대신 안정적으로 다운캐스팅 할 수 있는 연산자 지원
	Animal* ani = new Dog;
	Dog* dog2 = dynamic_cast<Dog*>(ani);
	if (dog2 != NULL)
	{
		dog2->sound();
		dog2->swimming();
	}
	else
	{
		cout << "강아지가 아니다" << endl;
	}



	Cat* cat1 = dynamic_cast<Cat*>(ani);
	if (cat1 == NULL)
	{
		cout << "고양이가 아니다" << endl;
	}

	return 0;
}