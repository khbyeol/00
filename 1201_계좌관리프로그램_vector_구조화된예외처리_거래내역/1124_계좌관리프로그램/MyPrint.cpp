//myprint.cpp
#include "std.h"

void MyPrint::myprint_intro()
{
	system("cls");
	printf("*******************************************\n");
	printf(" 2025학년도 2학기 비트 단기 과정\n");
	printf(" C++언어를 활용한 OOP기반 계좌 관리 프로그램\n");
	printf(" 2025.11.25\n");
	printf(" 최창민\n");
	printf("*******************************************\n");
	system("pause");
}

char MyPrint::myprint_menu()
{
	printf("*******************************************\n");
	printf("[1] 계좌 저장(insert)\n");
	printf("[2] 계좌 검색-계좌번호(select)\n");
	printf("[3] 계좌 정보 수정-입금(update)\n");
	printf("[4] 계좌 정보 수정-출금(update)\n");
	printf("[5] 계좌 삭제(delete)\n");
	printf("[6] 프로그램 종료(exit)\n");
	printf("*******************************************\n");

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