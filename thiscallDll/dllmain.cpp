#include "pch.h"
#include "Windows.h"
#include <stdio.h>


class __declspec(dllexport) TestClass 
{  
public: 
	int __thiscall func_thiscall(int a,int b,int c,int d, int e)  
	{
		return a + b + c + d + e;
	}
};


class TestClass2 
{
public:

private:
	virtual int __thiscall func_thiscall3(int a, int b, int c, int d, int e);
};

int __thiscall TestClass2::func_thiscall3(int a, int b, int c, int d, int e)   
{
	return a + b + c + d + e ;
}
