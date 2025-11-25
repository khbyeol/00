//33_맴버함수오버라이드.cpp

/*
왜 필요할까?
- 부모로부터 맴버함수를 물려받았다. -> 맘에 안들어 -> 재정의 (Override)
재정의(오버라이드) : 완전히 똑같은 모양으로 정의
				     리턴, 이름, 매개변수

- 재정의를 해도 상속된 메서드는 존재한다.
*/

#include <iostream>
using namespace std;

class Parson
{
protected:
	string name;
	int age;
public:
	Parson(string name, int age) : name(name), age(age) {}
public:
	string get_name() const { return name;}
	int get_age() const { return age; }
public:
	void Print() const
	{
		cout << name << ",";
		cout << age << ",";
	}
};

//이름, 나이, 학교, 학과
class Student : public Parson
{
private:
	string uni;
	string sub;
public:
	Student(string _name, int _age, string _uni, string _sub) 
		:Parson(_name, _age) , uni(_uni), sub(_sub)
	{
	}
	//재정의 (Override)
public:
	void Print() const
	{
		//1. 문제 해결 : 부모의 private를 protected로 변경 (최악의 수)
		cout << name << ",";
		cout << age << ",";
		cout << uni << ",";
		cout << sub << ",";

		//2. 문제 해결 : get메서드 활용

		cout << get_name() << ",";
		cout << get_age() << ",";
		cout << uni << ",";
		cout << sub << ",";		cout << endl;

		//3. 문제 해결 : OOP개념 적용한 방식

		Parson::Print();
		cout << uni << ",";
		cout << sub << ",";		cout << endl;



	}
};

int main()
{

	Student stu("홍길동", 10, "우송대", "컴정");

	//컴파일러 입장
	//stu의 타입(객체)이 누구냐?
	stu.Print();

	return 0;
}