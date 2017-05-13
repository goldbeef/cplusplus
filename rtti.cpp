/*************************************************************************
    > File Name: rtti.cpp
    > Author: goldbeef
    > Mail: goldbeef@163.com 
    > Created Time: 2017年05月13日 星期六 17时56分04秒
 ************************************************************************/

#include <iostream>
#include <typeinfo>
using namespace std;

class Base
{
public:
    virtual void display()
    {
        cout << "Base::display" << endl;
    }
};

class Child1 : public Base 
{
public:
    virtual void display()
    {
        cout << "Child1::display" << endl;
    }

    void child1Say()
    {
        cout << "child1Say" << endl;
    }
};

class Child2 : public Base 
{
public:
    virtual void display()
    {
        cout << "Child::display" << endl;
    }

    void child2say()
    {
        cout << "child2say" << endl;
    }
};

int main()
{
    Base* ptrBase = new Base();
    Base* ptrChild1 = new Child1();
    Base* ptrChild2 = new Child2();
    
    Base* ptrArray[3] = {
        ptrBase,
        ptrChild1,
        ptrChild2
    };

    int i;

    //ptr convert
    //child1 
    /*
    for (i = 0; i < sizeof(ptrArray) / sizeof(ptrArray[0]) ; i++)
    {
        Child1* ptr = dynamic_cast<Child1*> (ptrArray[i]);
        if (ptr)
        {
            ptr->child1Say();
        }
    }
    
    //child2 
    for (i = 0; i < sizeof(ptrArray) / sizeof(ptrArray[0]); i++)
    {
        Child2* ptr = dynamic_cast<Child2*> (ptrArray[i]);
        if (ptr)
        {
            ptr->child2say();
        }
    }
    */

    //ret convert
    //child1 
    /*
    for (i = 0; i < sizeof(ptrArray) / sizeof(ptrArray[0]) ; i++)
    {
        try
        {
            Child1& ref = dynamic_cast<Child1&> (*ptrArray[i]);
            ref.child1Say();
        }
        catch (exception& e)
        {
            cout << "catch exception: " << e.what() << endl;
        }
    }
    
    //child2 
    for (i = 0; i < sizeof(ptrArray) / sizeof(ptrArray[0]); i++)
    {
        try
        {
            Child2& ref = dynamic_cast<Child2&> (*ptrArray[i]);
            ref.child2say();
        }
        catch (exception& e)
        {
            cout << "catch exception: " << e.what() << endl;
        }
    }*/

    //typeid and typeinfo
    for (i = 0; i < sizeof(ptrArray) / sizeof(ptrArray[0]); i++)
    {
        cout << typeid(*ptrArray[i]).name() << endl;
    }
    return 0;
}
