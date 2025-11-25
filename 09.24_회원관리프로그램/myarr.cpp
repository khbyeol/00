//myarr.c
#include "std.h"

MyArr::MyArr() : max(10), size(0)
{}

MyArr::~MyArr()
{

}

int MyArr::get_max() const
{
	return max;
}

int MyArr::get_size() const
{
	return size;
}

void* MyArr::get_data(int idx)
{
	return base[idx];
}

bool MyArr::push_back(void* value)
{
	if (max <= size)	//isOverflow
		return false;

	base[size] = value;
	size++;

	return true;
}

bool MyArr::erase(int idx) 
{
	//isempty
	if (size == 0)
		return false;
	//idx ¿À·ù
	if (idx < 0 || idx >= size)
		return false;

	void* temp = base[idx];
	for (int i = idx; i < size - 1; i++)
	{
		base[i] = base[i + 1];
	}
	size--;
	delete temp;		//*****************

	return true;
}