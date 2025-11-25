//10_태그가타입명이다.cpp

#include <iostream>

//C언어 방식
typedef struct tagmember member;
struct tagmember 
{

};

//C++언어
struct member1
{

};

int main()
{
	struct tagmember mem1;

	member mem2;

	member1 mem3;
	
	return 0;
}