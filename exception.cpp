/*************************************************************************
    > File Name: exception.cpp
    > Author: goldbeef
    > Mail: goldbeef@163.com 
    > Created Time: 2017年05月10日 星期三 21时34分07秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

#define LARGE_BLOCK 1000000000000

void opt(int leftVal, int rightVal)
{
    if (leftVal + rightVal == 0)
    {
        throw "msg: sum is zero";
    }
}

class bad_base
{
public:
    virtual void display()
    {
        cout << "bad_base::display" << endl;
    }
};

class bad_child_1: public bad_base
{
public:
    virtual void display()
    {
        cout << "bad_child_1::display" << endl;
    }
};

class bad_child_2: public bad_base
{
public:
    virtual void display()
    {
        cout << "bad_child_2::display" << endl;
    }
};

int main()
{
    /*1)
    //abort();
    //std::abort();
    */
    
    #if 0
    int leftVal, rightVal;
    while (cin >> leftVal >> rightVal)
    {
        /*
        try
        {
            opt(leftVal, rightVal);
        }
        catch (const char *msg)
        {
            cout << "catch error: " << msg << endl;
        }
        */

        /*
        try
        {
            int sum = leftVal + rightVal;
            switch (sum)
            {
                case 0:
                    throw bad_base(); break;
                case 1:
                    throw bad_child_1(); break;
                case 2:
                    throw bad_child_2(); break;
                default:
                    throw "unknow exp";
            }
        }
        catch (bad_base& exp)
        {
            cout << "catch exp" << endl;
            exp.display();
        }
        catch (...)
        {
            cout << "cat unknow exp" << endl;
        }
        */
    }
    #endif

    /*
    char* buff = new (std::nothrow) char[LARGE_BLOCK];
    if (buff == 0)
    {
        cout << "malloc error" << endl;
        return -1;
    }*/
    
    try
    {
        char* buff = new char[LARGE_BLOCK];
    }
    catch (exception &e)
    {
        cout << "malloc error, msg: " << e.what() << endl;
    }
    return 0;
}
