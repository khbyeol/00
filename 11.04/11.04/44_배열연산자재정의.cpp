//44_배열연산자재정의.cpp

#include <iostream>
using namespace std;

class MyArr
{
private:
	int arr[10];
public:
	int& operator[](int idx)
	{
		return arr[idx];
	}
};

int main()
{
	MyArr arr;
	arr[1] = 10;			// ??
	int value = arr[1];		// arr.operator[](1);
	cout << arr[1] << endl;

	return 0;
}