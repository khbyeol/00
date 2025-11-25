//04_기본입출력.cpp
/*
C언어 : printf 함수 / scanf 함수
		서식을 이용 : %d, %f, %c, %s
-----------------------------------------------
C++언어 : cout, cin 객체(object)
		  객체 -> 특정 목적으로 제공되는 모듈!

-cout	: 출력객체	, << : 출력 연산자
-cin	: 입력객체	, >> : 입력 연산자
**** 모든 타입들의 입력 출력 방식이 동일하다. *****

*/

#include <iostream>

using std::cout;	//출력객체
using std::endl;	//개행처리 함수
using std::cin;		//입력객체

int main()
{
	char name[20];
	int age;
	char gender;
	float weight;

	cout << "이름 입력 : ";	cin >> name;
	cout << "나이 입력 : ";	cin >> age;
	cout << "성별 입력(m/f) : ";	cin >> gender;
	cout << "몸무게 입력 : ";	cin >> weight;

	cout << "\n\n[입력결과]" << endl;
	cout << "이  름: " << name << endl;
	cout << "나  이: " << age << endl;
	cout << "성  별: " << gender << endl;
	cout << "몸무게: " << weight << endl;

	return 0;
}

