//34_실습.cpp
//Product[int id, int price]
//Drink[string type, string name] 

#include <iostream>
using namespace std;

class Product
{
private:
	int id;
	int price;
public:
	Product(int _id, int _price) : id(_id), price(_price)
	{
	}
public:
	void setPrice(int _price)
	{
		price = _price;
	}
public:
	void Print()
	{
		cout << id << ",";
		cout << price << ",";
	}
};

class Drink : public Product
{
private:
	string type;
	string name;
public:
	Drink(int _id, int _price, string _type, string _name) : Product(_id, _price), type(_type), name(_name) {}
public:
	void setName(string _name)
	{
		name = _name;
	}

public:
	void Print()
	{
		Product::Print();
		cout << type << ",";
		cout << name << endl;
	}
};

int main()
{
	Drink p1(111, 1500, "음료수", "콜라");
	Drink p2(222, 1800, "음료수", "사이다");

	p1.setPrice(1000);
	p1.Print();			//111, 1000, 음료수, 콜라

	p2.setName("제로사이다");
	p2.Print();		//222, 1800, 음료수, 제로사이다

	return 0;
}