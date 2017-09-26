// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int elementry(int);

int main()
{
	for (auto &x : { 10,21,32 })
	{
		cout << x << '\n';
	}
	return 0;
}

int elementry(int x)
{
	return x*x;
}