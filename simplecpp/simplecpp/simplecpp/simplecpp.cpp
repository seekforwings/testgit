// simplecpp.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

void main_fun1() {
	printf("main_func1");
}
void dev_func1() {
	printf("dev_func1");
}


int _tmain(int argc, _TCHAR* argv[])
{
	printf("hello world\n");
	printf("hello 5");

	main_fun1();


	dev_func1();

	return 0;
}

