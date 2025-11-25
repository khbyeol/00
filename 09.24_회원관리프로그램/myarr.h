//myarr.h
#pragma once

class MyArr
{
private:

	void* base[10];		//저장소(int*, 10개)	  --------------------------- 1 )
	int max;			//최대 저장 크기
	int size;			//저장 위치(저장 개수)

public:
	MyArr();
	~MyArr();

public:
	int get_max() const;
	int get_size() const;


public:
	void* get_data(int idx);
	bool push_back(void* value);
	bool erase(int idx);
};

