//16_생성자와객체초기화.cpp
/*
생성자 : 특수한 형태의 맴버 함수 
		 리턴타입 : X
		 이름약속 : 타입명과 동일
		 매개변수 : O
		 * 매개변수가 있다는 말은 오버로딩이 가능
- 목적 : 객체 생성시 초기화
- 특징 : 객체 생성시 자동으로 호출
		 직접 호출할 수 없다.
*/

#include <iostream>
using namespace std;

struct Sample
{
	Sample() { cout << "1_Sample()" << endl; }
	Sample(int n1) { cout << "2_Sample(int)" << endl; }
	Sample(char ch) { cout << "3_Sample(char)" << endl; }
};

int main()
{
	//변수 선언 -> Sample 객체 생성
	Sample s1;
	Sample s2(10);
	Sample s3('A');

	return 0;
}