// xv.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class CTeet
{
public:
	virtual void test() = 0;
	virtual void display()
	{
		cout << "基类" << endl;
	}
};
class CXeet :public CTeet
{
public:
	void test()
	{

	}
	void display()
	{
		cout << "派生类" << endl;
	}
};
int main()
{
	CTeet * p;
	CXeet o2;
	p = 02;
	p->display();
    return 0;
}

