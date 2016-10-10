// Homework_1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int fun(int n) {
	return fun(n++);
};

struct MyStruct
{
	int nums[2];
};

MyStruct create() {
	MyStruct m1;
	m1.nums[0] = 1;
	return m1;
};

int main()
{
	//int num = fun(1);
	//printf("n=%d",num);
	MyStruct mystruct;
	mystruct = create();
    return 0;
}

