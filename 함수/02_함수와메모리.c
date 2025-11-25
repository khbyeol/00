//02_함수와메모리.c
/*
-함수가 호출되면 해당 함수의 stack 메모리가 생성된다.
-함수가 종료되면 해당 함수의 stack 메모리가 소멸된다.
=> 따라서 함수의 stack 메모리를 휘발성 메모리(임시 메모리)라 한다.

-함수의 stack 메모리에 저장되는 변수(개수 : 5개)
 지역변수 :ch, num1, fnum
 매개변수 :n1, n2
 ex) void fun(int n1, int n2)
	{
		char ch;
		int num1;
		float fnum;
	}
*/

#include <stdio.h>

void add_exam(int n1, int n2);

/*
----------------------------------------
104번지		num2		20
100번지		num1		10
----------------------------------------
[main stack]
*/
void main()
{
	int num1 = 10;
	int num2 = 20;

	add_exam(num1, num2);
}

/*
----------------------------------------
208번지		result		30
204번지		n2			20
200번지		n1			10
----------------------------------------
[add_exam stack]
*/
void add_exam(int n1, int n2)
{
	int result;
	result = n1 + n2;
	printf("%d + %d = %d\n", n1, n2, result);
}