//05_배열과함수.c
/*
1.	일반변수는 값 전달과 주소 전달이 가능하다.
	int num = 10;		fum(num, &num);

2.	배열은?
	배열의 이름은 주소 : 배열은 주소전달만 가능하다.
	int arr[3] = {1, 2, 3};		fun(arr); //주소전달
								fun(arr[0], &arr[0]);
3.	상수
	int num;		//변수
	
	const int NUM;	//상수는 반드시 선언과 동시에 초기화
	NUM = 1;		//에러
*/
#include <stdio.h>

void set_arr(int* parr);
void print_arr(const int* parr);

/*
----------------------------------------
108번지		arr[2]		3
104번지		arr[1]		2
100번지		arr[0]		1
----------------------------------------
[main stack]
*/
void main()
{
	int arr[3];

	set_arr(arr);		//1,2,3 초기화 (주소)

	print_arr(arr);	//출력 (값)
}


/*
----------------------------------------
200번지		parr	[100번지]
----------------------------------------
[set_arr stack]
*/
void set_arr(int* parr)
{
	for (int i = 0; i < 3; i++)
	{
		parr[i] = i + 1;
	}
}

//const int* parr :			//역참조된 주소의 정보를 변경하지않음. 
void print_arr(const int* parr)
{
	for (int i = 0; i < 3; i++)
	{
		printf("%4d", parr[i]);
	}
	printf("\n");
}