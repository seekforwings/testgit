// simplecpp.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

void dev_func1() {
	printf("dev_func1");
}

int _tmain(int argc, _TCHAR* argv[])
{
	printf("hello world\n");
	printf("hello 5");

	dev_func1();

	return 0;
}

