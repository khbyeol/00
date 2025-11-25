//04_실습.c

/*
변수선언 -> 초기화 -> 연산 -> 결과출력
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void exam1();
void exam2();
void exam3();
void exam4();
void exam5();
void test();

void main()
{
	test();
}

/*
정수 2개를 입력받아 사각형의 넓이를 출력하시오.
(사각형의 넓이 = 밑변 * 높이)
*/
void exam0()
{
	int num1;	//in
	int num2;	//in
	int result; //out
	printf("밑변: ");
	scanf("%d", &num1);

	printf("높이: ");
	scanf("%d", &num2);

	result = num1 * num2;
	printf("사각형의 넓이: %d\n", result);

}

void exam1()
{
	int num1;
	int num2;
	float result;

	printf("밑변: ");
	scanf("%d", &num1);
	printf("높이: ");
	scanf("%d", &num2);

	result = (num1 * num2) / 2.0f;
	printf("삼각형의 넓이: %lf\n", result);
}

void exam2()
{
	int num1;
	int num2;
	int num3;
	int result1;
	double result2;

	printf("첫번째 정수: ");
	scanf("%d", &num1);
	printf("두번째 정수: ");
	scanf("%d", &num2);
	printf("세번째 정수: ");
	scanf("%d", &num3);

	result1 = num1 + num2 + num3;
	result2 = (num1 + num2 + num3) / 3.0;
	printf("합: %d\n", result1);
	printf("평균: %lf\n", result2);
}

void exam3()
{
	char ch1;
	char result1;

	printf("대문자 입력: ");
	scanf("%c", &ch1);

	result1 = ch1 + ('a' - 'A');
	printf("소문자: %c\n", result1);

}

void exam4()
{
	int num1;
	float fnum1;
	
	printf("화씨온도: ");
	scanf("%d", &num1);

	fnum1 = 5.0f / 9.0f * (num1 - 32);
	printf("입력한 화씨 %d도는 섭씨 %f도\n", num1, fnum1);
}

void exam5()
{
	char ch1;

	printf("문자 입력: ");
	scanf("%c", &ch1);
	printf("%c의 아스키 코드 값은 %d 입니다.\n", ch1, ch1);
}


// 소수점 0.0 => 실수형 double
// 0.0f => 실수형 float
// * 이나 / 연산으로 둘 중 큰 자료형으로 변환
// = 연산자 왼쪽값이 더 크거나 같아야함 (아마 float double 인 경우만 크기비교??)


void test()
{
	char num1;
	char num2;

	printf("문자입력: ");
	scanf("%c", &num1);

	char dummy;
	//scanf("%c", &dummy);
	//동일한 기능 dummy = getchar(); 
	dummy = getchar();

	printf("문자입력: ");
	scanf("%c", &num2);

	printf("결과: %c %c", num1, num2);
}
