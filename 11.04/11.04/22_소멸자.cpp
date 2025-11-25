//22_소멸자.cpp
/*
생성자							소멸자
------------------------------------------------------------------------
특수한 목적과 모양을 갖는 메서드
반환타입x						반환타입 x

이름은 클래스명과 동일 이름은 클래스명과 동일, 옆에 연산자 추가
ex)Member						ex) ~Memeber()

매개변수 o						매개변수 x
여러개 생성자 가능				1개만 존재 

객체가 생성될 때 자동으로		객체가 소멸할 때 자동으로 호출
호출

객체 초기화						객체 소멸시 처리할 부분이 있다면...

개발자가 정의하지 않으면 생성자, 소멸자 자동으로 만들어 진다.
*/

#include <iostream>
using namespace std;

class Sample
{
public:
	Sample() { cout << "1.Sample()" << endl; }
	Sample(int n) { cout << "2.Sample(int)" << endl; }
	~Sample() { cout << "A.~Sample" << endl; }
};

int main()
{
	//객체 생성
	//Sample s1;		//1
	//Sample s11(10);		//1

	//Sample s2[3];	//3																	
	Sample s22[3] = { Sample(10), Sample(20) };										

	//Sample* s3;		//0
	//s3 = (Sample*)malloc(sizeof(Sample));		//?? X
	//s3 = new Sample;	//1

	//delete s3;

	//*****************************
	/*Sample* s4[4];		//0

	s4[0] = new Sample;
	s4[1] = new Sample(10);

	delete s4[0];
	delete s4[1];*/


	return 0;
}