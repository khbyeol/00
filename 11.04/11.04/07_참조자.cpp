//07_참조자.cpp
/*
reference 별명

*/

#include <iostream>
using namespace std;

/*
----------------------------------------
100번지		number(ref_number)		10 -> 20 -> 30
----------------------------------------
*/
int main()
{
	int number = 10;
	int& ref_number = number;	//ref_number : 참조자

	number = 20;
	ref_number = 30;

	cout << number << endl;		//30
	cout << &number << "," << &ref_number << endl;

	return 0;
}