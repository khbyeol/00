//49_ostream.cpp

#include <iostream>
using namespace std;

//조정자 함수
ostream& twotab(ostream& os)
{
	printf("\t\t");
	return os;
}

int main()
{
	cout << "Hello" << twotab << "Hello" << endl;
	cout << "0x" << hex << 10 << endl;
	cout << "0" << oct << 10 << endl;
	cout << 10 << endl;

	return 0;
}