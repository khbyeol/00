//02_변수.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//변수선언 -> 초기화 -> 연산 -> 결과출력

void exam1();
void exam2();
void exam3();
void exam4();
void exam5();


void main()
{
	exam5();
}


//1. 변수선언: 데이터를 저장할 수 있는 공간을 만들자.
//타입: 데이터 형태
//정수형(int), 문자형(char), 실수형(double)
void exam1()
{
	int num1;	//정수를 저장하는 공간 -> 쓰레기
	int num2;
	char ch1;	//문자를 저장하는 공간 -> 쓰레기

}

//2. 변수 초기화: 저장공간에 최초 값을 저장.
void exam2()
{
	int num1;
	num1 = 10;	//(초기화)	// = : 대입연산자
				// L value = R value

	num1 = 20;	//대입연산
	int num2 = 20;
}
 
//3. 연산[in] -> [out]
void exam3()
{
	int num1;	//in
	int num2;	//in
	int result;	//out

	num1 = 10;
	num2 = 20;

	result = num1 + num2;

	//%d: 서식(10진수정수)
	printf("결과 출력: %d + %d = %d\n", num1, num2, result);	
}

//정수 2개를 각각 100과 200으로 초기화하고 두 수의 차(-)의 결과를 출력하시오.
void exam4()
{
	int num1;
	int num2;
	int result;

	num1 = 100;
	num2 = 200;

	result = num1 - num2;

	printf("결과 출력: %d - %d = %d\n", num1, num2, result);
}

/*
---------------------------------------
 104번지	num2	10
 100번지	num1	10
---------------------------------------
[메모리]
*/
void exam5()
{
	int num1;
	int num2;

	num1 = 10;		//L(저장공간) = 
	num2 = num1;	//			  = R(값)		

	printf("정수 입력: ");


	//%d: 입력버퍼에서 정수 한개를 가져와
	//	  2번째 인자의 정보를 활용해서 저장해 줘 -> 100번지의 저장공간에 저장해줘
	scanf("%d", &num1);	//&: 주소연산자

	printf("정수 입력: ");
	scanf("%d", &num2);

	printf("입력 결과: %d, %d\n", num1, num2);
}


