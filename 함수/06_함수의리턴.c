//06_함수의리턴.c

#include <stdio.h>

void exam1();
int exam2();
void exam3();

void main()
{
	exam2();				//30;
	int value = exam2();	//int value = 30;
	
	exam3();
}

/*
함수의 종료
1. 닫는 중괄호 : 함수의 끝
2. return 키워드
*/
void exam1()
{
	printf("문장1\n");
	printf("문장2\n");
	return;
	printf("문장3\n");
	printf("문장4\n");
}

//함수의 리턴타입에 맞는 타입을 반환처리
//호출자는 해당 리턴값을 받는것은 선택!
int exam2()
{
	return 10 + 20;
}

//printf, scanf의 리턴타입
void exam3()
{
	printf("Hello World\n");
	printf("%d\n", 10);
	printf("%d, %d\n", 10, 20);
	int ret = printf("한글");		//멀티바이트(문자표현: 1 or 2)
	printf("-> %d\n,", ret);
}