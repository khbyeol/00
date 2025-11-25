//11_void포인터.c
/*
1.	주소를 저장하는 목적
	ex) int* p;			//int의 주소를 저장
		double* p2;		//double의 주소를 저장
		int* arr[3];	//int의 주소를 3개 저장
		int (*f1)(int, int)		//리턴타입int, 매개변수가 int,int인 함수 저장
2.	포인터 타입은 크기가 동일하다.
3.	내가 int의 주소를 저장하고 있다면 역참조했을때 int가 있어야 한다.
4.	활용
	배열포인터*** : 배열을 포인터에 대입, 연산이 동일하더라
	함수포인터	  : 함수의 이름이 주소더라, 함수를 저장하는 포인터
	void포인터	  : 모든 타입의 주소를 저장할 수 있다.
					void* : 형식이 없다.

*/
#include <stdio.h>

int main()
{
	int num = 10;
	char ch = 'A';

	int* pnum;
	pnum = &num;	//int* = int*
	//pnum = &ch;		//int* = char*

	//1. 모든 타이브이 주소를 저장할 수 있다.
	int arr1[5] = { 1,2,3,4,5 };
	char arr2[5] = { 'a', 'b', 'c', 'd', 'e' };
	
	void* vp;
	vp = &num;		printf("%d\n", *(int*)vp);
	vp = &ch;		printf("%c\n", *(char*)vp);
	vp = arr1;		printf("%d\n", ((int*)vp)[1]);
	vp = arr2;		printf("%c\n", ((char*)vp)[1]);

	//2. 사용시 반드시 원래 타입으로 형변환해야 한다.
	arr1 + 1;	// 주소이동, 몇byte이동? sizeof(int)*1
	arr2 + 1;	// 주소이동, 몇byte이동? sizeof(char)*1
	//vp + 1;	//??
	
	return 0;
}