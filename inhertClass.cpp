/*************************************************************************
    > File Name: inhertClass.cpp
    > Author: goldbeef
    > Mail: goldbeef@163.com 
    > Created Time: 2017年01月08日 星期日 20时27分27秒
 ************************************************************************/

#include <iostream>
using namespace std;

class CBase
{
    public:
        virtual void show();
};

void CBase::show()
{
    cout << "show base" << endl;
}


class  CChild: public CBase
{
    public:
        virtual void show();
};

void CChild::show()
{
    cout << "show child" << endl;
}

class  CChild1: public CBase
{
    public:
        virtual void show(int val);
};

void CChild1::show(int val)
{
    CBase::show();
    cout << "show child1" << endl;
}

class ABC
{
    public:
        virtual void show() = 0;
        virtual void display() = 0;
        virtual void say() ;
};


void ABC::display()
{
    cout << "display abc" << endl;
}

void ABC::say()
{
    cout << "say abc" << endl;
}

class ExtendABC : public ABC
{
    virtual void show();
    virtual void display();
};

void ExtendABC::show()
{
    cout << "show ExtendABC" << endl;
}

void ExtendABC::display()
{
    cout << "display ExtendABC" << endl;
}


int main()
{
#if 0
    CBase *basePtr;

    CBase base;
    CChild child;

    basePtr = &base;
    basePtr->show();

    basePtr = &child;
    basePtr->show();

    CBase& baseRef1 = base;
    baseRef1.show();

    CBase& baseRef2 = child;
    baseRef2.show();
#endif

#if 0
    CChild1 child1;
    //child1.show(); //error
    child1.show(5);
#endif    
    
    ExtendABC extendABC;
    ABC *ptrABC = &extendABC;
    ptrABC->show();
    ptrABC->display();
    ptrABC->say();
    return 0;
}
