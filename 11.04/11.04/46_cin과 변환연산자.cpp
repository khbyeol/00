//46_cin과 변환연산자.cpp
#include <iostream>
using namespace std;

int input_integer(string msg)
{
	while (true)
	{
		int value;
		cout << msg << " :";		cin >> value;
		if (cin)		//성공 : true , 실패(고장) : false
		{
			return value;
		}
		cin.clear();	//초기화
		cin.ignore();	// char dummy = getchar();
	}
	
}

int main()
{
	cout << input_integer("정수 입력") << endl;

	return 0;
}