//01_이름이있는공간.cpp

#include <stdio.h>
namespace aaa
{
	void fun1() { printf("aaa::fun1()\n"); }
	void fun2() { printf("aaa::fun2()\n"); }
	void fun3() { printf("aaa::fun3()\n"); }
}

namespace bbb
{
	void fun1() { printf("bbb::fun1()\n"); }
	void fun2() { printf("bbb::fun2()\n"); }
	void fun3() { printf("bbb::fun3()\n"); }
}

int main()
{
	printf("Hello World!\n");

	//사용방법3 : [약속]특정공간에 있는 함수는 사용하겠다.(통합)
	using namespace aaa;
	fun1();
	fun2();
	fun3();


	//사용방법2 : [약속]특정공간에 있는 함수를 사용하겠다.(개별)
	using aaa::fun1;
	using aaa::fun2;
	fun1();
	bbb::fun1();

	//사용방법1 : 이름이있는공간::함수명()
	aaa::fun1();
	bbb::fun1();



	return 0;
}