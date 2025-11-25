//47_출력연산자.cpp

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

	//전역함수를 친구먹으면서 위치를 클래스 내부로 이동
	friend ostream& operator<<(ostream& os, const Member& m)
	{
		os << m.name << "," << m.age << "," << m.weight;
		return os;
	}

};


int main()
{
	Member mem("홍길동", 12, 20.2f);
	cout << mem << endl;	//cout.operator<<(mem);
							//operator<<(cout, mem);

	return 0;
}