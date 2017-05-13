/*************************************************************************
    > File Name: typeconvert.cpp
    > Author: goldbeef
    > Mail: goldbeef@163.com 
    > Created Time: 2017年05月13日 星期六 20时04分26秒
 ************************************************************************/

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void display()
    {

    }
};

class Child : public Base 
{
public:
    /*
    virtual void display()
    {

    }*/
};

int main()
{
    Child oChild;
    Base* ptrBase = &oChild;
    Child* ptrChild = dynamic_cast <Child*> (ptrBase);

    const int iVal =  0;
    const int* ptrConstInt = &iVal;
    int* ptrInt = const_cast<int*> (ptrConstInt);
    *ptrInt = 20;

    double dVal;
    float fVal = static_cast<float> (dVal);

    char b;
    int* ptrTmp = reinterpret_cast<int*> (&b);

    return 0;
}
