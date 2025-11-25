//48_ostream.cpp

/*
C++언어는 C언어에서 제공되는 함수를 클래스화 하였다.
*/

#include <stdio.h>


namespace mystd
{
	class ostream
	{
	public: 
		ostream& operator << (const int value)
		{
			printf("%d", value);
			return *this;		//*******
		}

		ostream& operator << (const char* msg)
		{
			printf("%s", msg);
			return* this;
		}

		ostream& operator<< (ostream& (*fun)(ostream& os))
		{
			return fun(*this);
		}
	};

	ostream cout;
	ostream& endl(ostream& os)
	{
		printf("\n");
		fflush(stdout);
		return os;
	}
}

using namespace std;

int main()
{
	cout << 10 << ", " << 20 << endl;			//cout.operator<<(10);
	return 0;
}