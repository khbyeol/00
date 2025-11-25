//11_동적메모리.cpp

/*
C언어				C++언어
malloc()			new			: 동적메모리 생성
free()				delete		: 동적메모리 제거
*/

#include <iostream>
using namespace std;

int main()
{
	int* p1 = new int;		//int를 1개 생성요청
	int* p2 = new int(2);	//int를 1개 생성요청 , 2로 초기화
	int* p3 = new int[2];	//int를 2개 생성요청(배열생성)

	*p1 = 10;		cout << *p1 << endl;	//10

	cout << *p2 << endl;	//2

	p3[0] = 10;		p3[1] = 20;

	//컴파일러는 타입을 기준으로 연산! 
	delete p1;
	delete p2;
	delete[] p3;		

	return 0;
}