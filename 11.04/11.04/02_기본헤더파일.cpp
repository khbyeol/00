//02_기본헤더파일.cpp

//#include <stdio.h>  //c 라이브러리 h
#include <iostream> //c++ 라이브러리 h : .h가 생략!!

int main()
{

	printf("Hello World!\n");	//c언어에서 제공되는 출력 함수

	std::cout << "Hello World!\n";	//c++언어 출력 방식
	std::cout << "Hello World!" << std::endl;
	
	return 0;
}