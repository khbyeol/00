//07_함수의사용.c	->  시험문제 출제 ******
/*
1. main 함수의 표준은 int를 반환하는 것

정수 2개를 입력받아 합의 결과를 반환하는 함수 
in  : 정수 2개
out : 합의 결과 (정수 1개)
*/
#include <stdio.h>

void my_add1(int n1, int n2, int* result);
int my_add2(int n1, int n2);

/*
--------------------------------------------------
108번지			result			X
104번지			num2			20
100번지			num1			10
--------------------------------------------------
[main stack]
*/
int main()
{
	int num1 = 10;
	int num2 = 20;
	int result;

	my_add1(num1, num2, &result);
	printf("%d\n", result);	//30

	result = my_add2(num1 + 10, num2 + 10);		//result = 50;
	printf("%d\n", result);
	return 0;
}

/*
------------------------------------------------
212번지				r
208번지				result			[108번지]
204번지				n2				20
200번지				n1				10
------------------------------------------------
[my_add1 stack]
*/
void my_add1(int n1, int n2, int* result)
{
	int r = n1 + n2;
	*result = r;
}

/*
------------------------------------------------
308번지				r				50
304번지				n2				30
300번지				n1				20
------------------------------------------------
[my_add2 stack]
*/
int my_add2(int n1, int n2)
{
	int r = n1 + n2;
	return r;
}