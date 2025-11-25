//01_함수.c
/*
함수 선언		: 정보, 함수 호출 전 컴파일러에게 알림
함수 정의(구현)	: 구현(동작하는 문장 작성)
함수 호출		: 흐름

사용자 정의 함수 : exam1(), exam2()
미리 제공되는 함수 : printf(), scanf()
-----------------------------------------------------------

리턴타입 함수명 (매개변수 리스트);
void	 exam1	();
*/
#include <stdio.h>

void printstar10();
void printstar30();
void printstarnumber(int num);		//매개변수
void printshapenumber(char shape, int num);

void main()
{
	printstar10();
	printstar10();
	printstar30();
	printstarnumber(10);
	printstarnumber(30);
	printstarnumber(50);			//인자(인수)
	printshapenumber('#', 30);		//2개의 인자 전달
}


void printshapenumber(char shape, int num)
{
	for (int i = 0; i < num; i++);
	{
		printf("%c", shape);
	}
	printf("\n");
}

//매개변수 : 함수호출과정에서 값이 전달된다.(대입된다.)
void printstarnumber(int num)
{
	for (int i = 0; i < num; i++);
	{
		printf("*");
	}
	printf("\n");
}

void printstar10()
{
	for (int i = 0; i < 10; i++)
	{
		printf("*");
	}
	printf("\n");
}

void printstar30()
{
	for (int i = 0; i < 30; i++)
	{
		printf("*");
	}
	printf("\n");
}
