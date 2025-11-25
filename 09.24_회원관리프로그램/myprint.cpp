//myprint.cpp
#include "std.h"

void MyPrint::myprint_intro()
{
	system("cls");
	printf("*******************************************\n");
	printf(" 2025학년도 2학기 비트 단기 과정\n");
	printf(" C++언어를 활용한 OOP 기반 회원관리프로그램 흐름\n");
	printf(" 2025.11.13\n");
	printf(" 최창민\n");
	printf("*******************************************\n");
	system("pause");
}

char MyPrint::myprint_menu()
{
	system("cls");
	printf("*******************************************\n");
	printf("[1] 회원 저장(insert)\n");
	printf("[2] 회원 검색-이름(select)\n");
	printf("[3] 회원 정보 수정-전화번호(update)\n");
	printf("[4] 회원 정보 삭제(delete)\n");
	printf("[5] 프로그램 종료(exit)\n");
	printf("*******************************************\n");
	system("pause");

	return _getch();
}

void MyPrint::myprint_ending()
{
	system("cls");
	printf("*******************************************\n");
	printf(" 프로그램을 종료합니다\n");
	printf("*******************************************\n");
	system("pause");
}