//03_bool형타입
#include <iostream>
/*
[기본형 타입]
불	형**  bool				:true 와 false 를 저장하는 타입
정수형	  int
실후형	  float, double
문자형	  char

*/
using std::cout;
using std::endl;

int main()
{
	bool b = true;
	cout << "b의 저장 값 : " << b << endl;	//1
	
	b = false;
	cout << "b의 저장 값 : " << b << endl;	//0

	return 0;
}