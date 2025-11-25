//45_변환연산자.cpp

#include <iostream>
using namespace std;

class Member
{
private:
	string name;
	int age;
	float weight;
public:
	Member(string _name, int _age, float _weight) : name(_name), age(_age), weight(_weight)
	{
	}
public:
	//변환연산자
	operator string() { return name; }
	operator int() { return age; }
	operator float() { return weight; }
};

int main()
{
	Member mem("홍길동", 12, 20.2f);
	
	//이름 얻고 싶다? 
	// 1. get메서드 활용 : 1순위
	// 2. 변환 연산자 사용 가능 : 객체를 다른 타입으로 변환하는 연산자
	string name = mem;		cout << name << endl;
	int age = mem;			cout << age << endl;
	float weight = mem;		cout << weight << endl;

	return 0;
}