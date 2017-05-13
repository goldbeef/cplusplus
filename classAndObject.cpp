/*************************************************************************
    > File Name: classAndObject.cpp
    > Author: goldbeef
    > Mail: goldbeef@163.com 
    > Created Time: 2016年12月23日 星期五 07时16分50秒
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

//tradition
/*enum Enum1
{
	MONTH
};
*/

//int val = MONTH; //suc
/*
enum Enum2
{
	MONTH // colistion with previous
}
*/


//c++11
/*
enum class Enum1 
{
	MONTH
};

enum class Enum2 
{
	MONTH
};

//int val = Enum1::MONTH;//error 
int val = (int)Enum1::MONTH;
*/

//c++11
//specify the low implement 
///*
enum Enum3 : int 
{
	MONTH = 0
};
//*/


class Test
{
public:
    Test(string name = "")
    {
        m_name = name;
        cout << "constructor, " << m_name << endl;
    }
    
    ~Test()
    {
        cout << "destructor, " << m_name << endl;
    }

    void constShow() const;
    void normalShow();

    enum EmBookType
    {
        HISTORY,
        CLASSICAL
    };

private:
    string m_name;
};

void Test::constShow() const 
{
    cout << "const show, " << m_name << endl;
}

void Test::normalShow() 
{
    cout << "normal show, " << m_name << endl;
}

class CHello
{
public:
    CHello(string name) 
    {
        m_name = name;
        cout << "CHello, " << m_name << endl;
    }
private:
    string m_name;
};

int main()
{
#if 0
    Test test;
    Test test1("test1");
    Test test2 = Test("test2");
    test = Test("test3");
    
    //c++0x
    Test test4 {"test4"};
    Test test5 = {"test5"};
#endif
    
#if 0
    Test test("test");
    test.normalShow();
    test.constShow();
    
    const Test test1("test1");
    //test1.normalShow();//error
    test1.constShow();
#endif 

#if 0
    CHello array[1] = { CHello("test1") };
#endif 
    
    int val = Test::HISTORY;
    return 0;
}
