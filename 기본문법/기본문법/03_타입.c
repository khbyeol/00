//03_타입.c
/*
기본형 타입		무엇을	크기(byte)?		예
int				정수	4byte			int num = 10: //-1, 0, 1
char			문자	1byte			char ch = 'A'; //'1'
double			실수	8byte			double dnum = 1.23;
*/
#define _CRT_SECURE_NO_WARNINGS
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

//num1이라는 이름의 정수형 변수를 선언하시오.
//10으로 초기화
//num1의 값 출력
void exam1()
{
	int num1;
	num1 = 10;

	printf("num1: %d\n", num1);

	int num2;
	printf("정수 입력: ");
	scanf("%d", &num2);
	printf("num2: %d\n", num2);
}

//ch1 이름의 문자형 변수 선언
//ch1에 'A'를 저장
//출력(%c)
void exam2()
{
	char ch1;
	ch1 = 'A';
	printf("ch1: %c\n", ch1);

	char ch2;
	printf("문자 입력: ");
	scanf("%c", &ch2);
	printf("ch2: %c\n", ch2);
}

/*
저장공간은 숫자만 저장할 수 있다.
-> 저장공간은 문자를 저장할 수 없다.
-문자를 저장하면 ASCII CODE표 기준으로 숫자로 치환된다.
*/
void exam3()
{
	char ch1;
	char ch2;

	ch1 = 'A';	//char = char -> int
	ch2 = 66;	//char = int

	printf("%c -> %d\n", ch1, ch1);
}


void exam4()
{
	char ch1;
	char ch2;

	ch1 = 0;
	ch2 = '0';

	printf("%d, %d\n", ch1, ch2); //0, 48
	printf("%c, %c\n", ch1, ch2); //NULL, '0'
}


//실수(double, %lf)
void exam5()
{
	double dnum1;
	dnum1 = 10.123;
	printf("dnum1: %lf\n", dnum1);

	double dnum2;
	printf("실수 입력: ");
	scanf("%lf", &dnum2);
	printf("dnum2: %lf\n", dnum2);
}

//실수(float, %f)
void exam6()
{
	float fnum;
	//warning C4305: '='
	//'double'에서 'float'(으)로 잘립니다.
	//fnum = 10.123; //float = double

	fnum = 10.123f;
	printf("fnum: %f\n", fnum);
}

