/*************************************************************************
    > File Name: reuseCode.cpp
    > Author: goldbeef
    > Mail: goldbeef@163.com 
    > Created Time: 2017年01月13日 星期五 07时26分08秒
 ************************************************************************/

#include <iostream>
using namespace std;

class CBase 
{ 
    public: 
        virtual void show();
        void sayHello();
    private:
        int m_val;
}; 

void CBase::show()
{
    cout << "show Cbase" << endl;
}
        
void CBase::sayHello()
{
    cout << "hello world" << endl;
}
///////////////////////////////
class CPublic: public CBase
{
    public:
        virtual void show();
};

void CPublic::show()
{
    cout << "show CPublic" << endl;
}
////////////////////////////////

class CProceted: protected CBase
{
    public:
        virtual void show();
};


void CProceted::show()
{
    CBase* ptr = this; //succ
    cout << "show CProceted" << endl;
}
////////////////////////////////////////
class CPrivate: private CBase
{
    public:
        virtual void show();
        using CBase::sayHello;
};

void CPrivate::show()
{
    CBase* ptr = this; //succ
    cout << "show CPrivate" << endl;
}

int main()
{
#if 0
    CBase* ptr;

    CBase cbase;
    cbase.show();

    CPublic cpublic;
    cpublic.show();

    CProceted cprotected;
    cprotected.show();

    CPrivate cprivate;
    cprivate.show();

    ptr = &cbase;
    ptr->show();

    ptr = &cpublic;
    ptr->show();
    
    //ptr = &cprotected; //error
    //ptr->show();


    //ptr = &cprivate; //error
    //ptr->show();
#endif

    CPrivate cprivate;
    cprivate.sayHello();
    return 0;
}
