//09_참조자반환.cpp

#include <iostream>
using namespace std;

int g_arr[5] = { 1,2,3,4,5 };

int get_arr(int idx) { return g_arr[idx]; }
int& get_arr1(int idx) { return g_arr[idx]; }


int main()
{
	int value = get_arr(2);		//int value = 3;
	//get_arr(2) = 20;			//3 = 20;

	int value1 = get_arr1(2);	//int value = g_arr[2];
	get_arr1(2) = 20;			//g_arr[2] = 20;

	cout << g_arr[2] << endl;

	return 0;
}