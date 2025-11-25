//05_연산자.c

#include <stdio.h>

void exam1();
void exam2();
void exam3();
void exam4();
void exam5();
void exam6();



void main()
{
	exam6();
}


//전치/후치 연산자
void exam1()
{
	int a = 1;

	int b = ++a;	//전치연산자(해당 문장에서 가장 먼저 처리)

	printf("%d, %d\n", a, b); //2, 2

	int c = a++;	//후치연산(해당 문장 종료 후 연산)

	printf("%d, %d\n", a, c); //3, 2
}


void exam2()
{
	int a = 1;
	int b = ++a + ++a + ++a + ++a;

	printf("%d, %d\n", a, b); //5, 20

	a = 1;
	b = a++ + a++ + a++ + a++;
	printf("%d, %d\n", a, b); //5, 4

	a = 1;
	a = ++a + a++ + ++a + a++;
	printf("%d, %d\n", a, b); //5, 12
}


//비교연산자 <, >, <=, >=, ==, !=
//참(0을 제외한 모든 숫자, 대표 1), 거짓(0) 반환
void exam3()
{
	int num1 = 10;
	int num2 = 10;

	int result = num1 == num2; //result = 1;

	printf("%d\n", result);
}


//논리연산자
//&&(논리곱), ||(논리합), !
void exam4()
{
	int result;

	result = 100 && -100;
	printf("%d\n", result);

	result = 0 || -10;
	printf("%d\n", result);

	result = !10;
	printf("%d\n", result); //0
}


//num1에 저장된 값이 90보다 크거나 같고 100보다 작거나 같으면 1
//아니면 0을 출력하시오.
void exam5()
{
	int num1 = 95;
	int result = (90 <= num1 && num1 <= 100);
	//int result = (90 <= num1 <= 100); // 90 <= num1 연산 후 1출력// 다음 1 <= 100 연산 후 1출력

	printf("%d\n", result);


}


//조건연산자
void exam6()
{
	int num1 = 10;
	char result;

	result = (num1 > 10 ? 'T' : 'F');

	printf("결과 : %c\n", result);
}


