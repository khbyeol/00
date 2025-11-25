//04_함수와인자전달.c
#include <stdio.h>

void my_add(int n1, int n2, int* n3);

void main()
{
	int num1 = 10;	//in
	int num2 = 20;	//in
	int result;		//out

	my_add(num1, num2, &result);

	printf("%d + %d = %d\n", num1, num2, result);
}

void my_add(int n1, int n2, int* n3)
{
	int result = n1 + n2;
	*n3 = result;		//******
}

