//05_함수의오버로딩.cpp
/*
function overloading
-함수의 이름은 같고 매개변수가 다른 함수

ex1) void fun1(int n1, int n2);
ex2) void fun1(int n1);
ex3) int  fun1(int n1);

함수명		: fun1, fun1, fun1
메서드명	: fun1(int, int), fun1(int), fun1(int)

C언어 <함수명> 식별
C++언어 <함수명 + 매개변수리스트> 식별
	-ex1과 ex2는 다른 함수이다.
	-ex2와 ex3는 동일 함수이다.
*/

#include <iostream>
using namespace std;

int my_sum(int n1, int n2) { return n1 + n2;}
double my_sum(double n1, double n2) { return n1 + n2; }
double my_sum(double n1, int n2) { return n1 + n2; }
int my_sum(int n1, int n2, int n3) { return n1 + n2 + n3; }

int main()
{
	cout << my_sum(10, 20) << endl;
	cout << my_sum(10.1, 20.2) << endl;
	cout << my_sum(10.1, 20) << endl;
	cout << my_sum(10, 20, 30) << endl;
	

	return 0;
}