//12_문자열.c
/*
1.	문자열의 표현 (큰 따옴표를 활용)
	0	: 정수
	'0' : 문자	-> 아스키코드표 => 48
	"0" : 문자열 -> '0', '\0' => 48 , 0 

2.	문자열은 크기가 아니라 종결문자로 관리된다.
3.	입출력 함수 확인
	printf, scanf
	puts,	gets	:문자열 전용함수
4.	문자열 변수 선언 시 배열을 사용한다.
	ex) char arr[10];
5.	문자열은 반드시 문자열 함수를 이용하여 연산한다.

*/
#include <stdio.h>
#include <string.h>

void exam1();
void exam2();
void exam3();
void exam4();
void exam5();
void exam6();
void exam7();
void exam8();
void exam9();

int main()
{
	exam9();

	return 0;
}

//기본 입출력
void exam1()
{
	char str1[10];		//문자 9개, \0
	char str2[10];

	printf("입력: ");
	//시작주소, 저장공간의 크기를 전달
	//gets_s는 그 크기를 넘어가는 입력이 발생하면 터트린다.
	gets_s(str1, sizeof(str1));

	printf("입력: ");
	scanf_s("%s", str2, (int)sizeof(str2));

	//출력할 시작주소를 전달
	//puts는 해당 주소로부터 문자를 계속 출력
	//언제까지 '\0' 나올때 까지
	puts(str1);

	printf("%s\n", str2);
}

//문자열 선언과 동시에 초기화
void exam2()
{	
	//문자열 배열
	char str1[10] = { 'a', 'b', 'c', '\0' };
	char str2[10] = { "abc" };
	char str3[10] = "abc";

	//문자 배열
	char str4[10] = { 'a', 'b', 'c', 'd' };	//???
	//char str5[]; //에러		but 초기화 같이하면 그 값만큼 저장공간 제공

	//%s : 전달된 주소부터 종결문자까지 출력
	printf("%s, %s, %s\n", str1, str2, str3);
	printf("%s\n", str1 + 1);	//bc
	printf("%c\n", str1[1]);	//b

	printf("%s\n", str4);		
}

//문자열 연산
void exam3()
{
	int num1 = 10;
	int num2;
	num2 = num1;		//가장 많이 사용하는 연산

	char str1[3] = "AB";
	char str2[3];
	//str2 = str1;	//X : 상수, 시작주소
	str2[0] = str1[0];
	str2[1] = str1[1];
	str2[2] = str2[2];

	printf("%s\n", str2);
}

void exam4()
{
	char str1[10] = "abcdefg";
	char str2[10];
	
	char* target = str2;
	for (char* src = str1; *src != '\0'; src++, target++)
	{
		*target = *src;
	}
	*target = '\0';		//종결문자
	printf("%s\n", str2);
}

void my_strcpy(char* target, const char* src)
{
	for (; *src != '\0'; src++, target++)
	{
		*target = *src;
	}
	*target = '\0';		
}

void exam5()
{
	char str1[10] = "ABCDEFG";
	char str2[10];

	my_strcpy(str2, str1);
	printf("%s\n", str2);
}

//문자열 대입이 필요한 경우
//strcpy_s() 
void exam6()
{
	char str1[] = "문자열은 한글도 가능";
	char str2[50] = "ABCD";

	strcpy_s(str2, sizeof(str2), str1);

	printf("%s\n", str2);
}

//기준 문자열 뒤에 추가
//strcat_s()
void exam7()
{
	char str1[] = "문자열은 한글도 가능";
	char str2[50] = "ABCD";

	strcat_s(str2, sizeof(str2), str1);

	printf("%s\n", str2);
}

//문자열 비교하기
//strcmp(첫번째 문자열기준, 두번째 문자열)
//크다(1보다 크거나 같은 수)
//같다(0)
//작다(-1보다 작거나 같은 수)
void exam8()
{
	char str1[10] = "ABCDEFG";
	char str2[10] = "ABcde";
	char str3[10] = "ABCDEFG";

	printf("%d\n", strcmp(str1, str2));	//-1
	printf("%d\n", strcmp(str1, str3)); //0
	printf("%d\n", strcmp(str2, str1)); //1
}

//문자열의 길이
//strlen : 문자열에서만 사용 가능, 실제 저장된 문자의 크기 
//sizeof : 모든 타입에서 사용 가능, 생성된 메모리 크기
void exam9()
{
	char str1[10] = "abcde";
	char str2[20] = "한글";
	char str3[] = "ABC한글";


	printf("%dbyte, %dbyte\n", (int)sizeof(str1), (int)strlen(str1));	//10, 5
	printf("%dbyte, %dbyte\n", (int)sizeof(str2), (int)strlen(str2));	//20, 4
	printf("%dbyte, %dbyte\n", (int)sizeof(str3), (int)strlen(str3));	//8, 7
}