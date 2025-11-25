//06_함수의기본값.cpp
/*
매개변수와 인자전달의 개념
void fun1(int n1, int n2);		fun1(10, 20);

매개변수에 기본값 설정할 수 있다.
(만약 인자가 전달이 안되면 기본값이 사용된다.)
void fun1(int n1, int n2 = 10, int n3 = 20);

fun1(1,2,3); 
fun1(1,2);		//n1 = 1, n2 = 2, n3 = 20
fun1(1);		//n1 = 1, n2 = 10, n3 = 20

규칙 : 인자전달은 반드시 첫번째 매개변수부터 시작된다.
void fun1(int n1 = 10, int n2, int n3);		//에러 !!!!

fun1(1,2);	//n1 = 1, n2 = 2, n3 = ??? 에러
*/


#include <iostream>
using namespace std;

double get_rect(int width, int height, int temp = 1)
{
	return (width * height) / temp;
}

int main()
{
	cout << "사각형의 넓이: " << get_rect(10, 20) << endl;
	cout << "삼각형의 넓이: " << get_rect(10, 20, 2) << endl;
	cout << "원의 넓이: " << get_rect(10, 10, 3.14) << endl;

	return 0;
}