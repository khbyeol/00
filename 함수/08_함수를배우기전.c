//08_함수를배우기전.c		*** 시험문제 ****
#include <stdio.h>

int main()
{
	int num1;
	int num2;
	char oper;
	float result;

	printf("정수입력: ");
	scanf_s("%d", &num1);

	printf("정수입력: ");
	scanf_s("%d", &num2);
	char dummy = getchar();
	
	printf("연산자 입력(+, -, *, /) : ");
	scanf_s("%c", &oper, (int)sizeof(oper));


	switch (oper)
	{
	case '+': result = (float)num1 + num2;	 break;
	case '-': result = (float)num1 - num2;	 break;
	case '*': result = (float)num1 * num2;	 break;
	case '/': result = (float)num1 / num2;	 break;
	default: printf("오류");
	}

	printf("%d %c %d = %.1f\n", num1, oper, num2, result);


	return 0;
}