// xv.cpp : �������̨Ӧ�ó������ڵ㡣
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
		cout << "����" << endl;
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
		cout << "������" << endl;
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

