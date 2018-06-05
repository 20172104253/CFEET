// cdate.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
protected:
	int feet;
	int inches;
public:
	CFeet();
	CFeet(int fi, int ti);
	~CFeet();
	void display();
	int getfeet();
	int getinches();
};
CFeet::CFeet()
{
	feet = 0;
	inches = 0;
	cout << "基类默认构造函数" << feet << "英尺" << inches << "英寸" << endl;
}
CFeet::CFeet(int fi, int ti)
{
	feet = fi;
	inches = ti;
	cout << "基类构造函数" << feet << "英尺" << inches << "英寸" << endl;
}
void CFeet::display()
{
	cout << "Display" << feet << "英尺" << inches << "英寸" << endl;
}
CFeet::~CFeet()
{
	cout << "基类析构函数" << feet << "英尺" << inches << "英寸" << endl;
}
int CFeet::getfeet()
{
	return feet;
}
int CFeet::getinches()
{
	return inches;
}
class CMyfeet:public CFeet
{
public:
	CMyfeet();
	CMyfeet(int t, int i);
	~CMyfeet();
};
CMyfeet::CMyfeet()
{
	cout << "派生类默认构造函数" << feet << "英尺" << inches << "英寸" << endl;
}
CMyfeet::CMyfeet(int t, int i):CFeet(t,i)
{
	feet = t;
	inches = i;
	cout << "派生类构造函数" << feet << "英尺" << inches << "英寸" << endl;
}
CMyfeet::~CMyfeet()
{
	cout << "派生类析构函数" << feet << "英尺" << inches << "英寸" << endl;
}

int main()
{
	CMyfeet of1(12,5);
	of1.display();
	return 0;
}
