//21_캡슐화와데이터은닉.cpp
/*
C언어	구조체 : 사용자 정의 데이터 타입 (데이터 캡슐화 대상)
C++언어 구조체 : 사용자 정의 데이터 타입 (데이터 + 함수 캡슐화 대상)
				- 기본 접근 지정자 : public
C++언어 클래스 : 객체 정의할 목적 (데이터 + 함수 캡슐화 대상)
				- 기본 접근 지정자 : private
*/
#include <iostream>
using namespace std;

//객체 정의
class Tv
{
public:
	int volume;			//맴버필드(맴버데이터)의 공개 

private:
	int channel;		//맴버필드(맴버데이터)의 은닉

	//외부로 공개는  get & set 메서드가 제공되어야 한다.
public: 
	int get_channel() { return channel;  }
	void set_channel(int c) 
	{
		if ( _c < 0 || _c >100 )
			channel = 0;
		else 
       		channel = _c; 
	}
};

int main()
{
	Tv tv1;				//객체 생성(인스턴스 생성)
	tv1.volume = -1;	//맴버 필드 외부 접근
						//잘못된 값이 저장될 수 있다.

	cout << "볼륨 : " << tv1.volume << endl;;

	tv1.set_channel(4);
	cout << "채널 :  " << tv1.get_channel() << endl;

	return 0;
}