//09_함수를배운후.c
//08복사
#include <stdio.h>

int input_integer();
void input_operation(char *oper);
void get_result(int n1, int n2, char op, float* result);
void print(int num1,int num2,char oper,float result);

int main()
{
	int num1;
	int num2;
	char oper;
	float result;

	num1 = input_integer();
	num2 = input_integer();
	input_operation(&oper);

	get_result(num1, num2, oper, &result);

	print(num1, num2, oper, result);

	return 0;
}

int input_integer()
{
	int num;

	printf("정수입력: ");
	scanf_s("%d", &num);
	char dummy = getchar();		

	return num;
}

void input_operation(char* oper)
{
	char op;

	printf("연산자 입력(+, -, *, /) : ");
	scanf_s("%c", &op, (int)sizeof(op));

	*oper = op;
}


void get_result(int n1, int n2, char op, float* result)
{
	float r;

	switch (op)
	{
	case '+': r = (float)n1 + n2;	 break;
	case '-': r = (float)n1 - n2;	 break;
	case '*': r = (float)n1 * n2;	 break;
	case '/': r = (float)n1 / n2;	 break;
	default: printf("오류");
	}

	*result = r;
}

void print(int num1, int num2, char oper, float result)
{
	printf("%d %c %d = %.1f\n", num1, oper, num2, result);
}