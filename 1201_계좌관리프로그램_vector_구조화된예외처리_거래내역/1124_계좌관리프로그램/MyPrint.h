//myprint.h
#pragma once

//(데이터)상태가 없는 객체를 생성할 필요가 없다.
class MyPrint
{
	//정적맴버함수 == 클래스맴버 => 객체 없이 사용하는 맴버
public:
	static void myprint_intro();
	static char myprint_menu();
	static void myprint_ending();
};
