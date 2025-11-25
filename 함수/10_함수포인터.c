//10_함수포인터.c
/*
함수의 이름은 주소다.

int num;
int *p1;	//int의 주소를 저장하겠다.
p1 = &num;

char *p2;	//char의 주소를 저장하겠다.

void fun1(void);
int fun2();
char fun3(int n1, int n2);

void (*f1)()		= fun1;
int (*f2)()			= fun2;
char (*f3)(int,in)	= fun3;

*/

#include <stdio.h>

int add(int n1, int n2) { return n1 + n2; }
int sub(int n1, int n2) { return n1 - n2; }

int cal(int n1, int n2, int(*fun)(int, int))
{
	int result = fun(n1, n2);	//******
	return result;
}

int main()
{
	int result1 = cal(20, 30, add);	//50
	printf("%d\n", result1);
	result1 = cal(20, 30, sub);
	printf("%d\n", result1);




	int (*fun)(int, int);
	fun = add;				printf("%d\n", fun(10, 20));
	fun = sub;				printf("%d\n", fun(10, 20));

	//함수 호출 : 해당 주소로 이동해라  
	printf("%d\n", add(10, 20)); //30
	printf("%d\n", sub(10, 20)); //-10

	return 0;
}

