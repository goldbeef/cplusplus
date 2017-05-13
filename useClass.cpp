#include <iostream>
using namespace std;

class CTest
{
public:
    CTest();
    CTest(double val);
    explicit CTest(int val);
    operator double() const;
    
    //c++11
    explicit operator int() const;
private:
    double m_val;
};

CTest::CTest()
{
    cout << "CTest_emtpy" << endl;
}

CTest::CTest(double val)
{
    cout <<  "CTest_double" << endl;
    cout << val << endl;
    m_val = val;
}

CTest::CTest(int val)
{
    cout <<  "CTest_int" << endl;
    cout << val << endl;
}

CTest::operator double() const
{
    cout << "double() " << m_val << endl;
    return m_val;
}

CTest::operator int() const
{
    cout << "int() " << (int)m_val << endl;
    return (int)m_val;
}

class CTest1
{
    public:
        CTest1(int val = 0);
        ~CTest1();
    private:
        int m_val = 10; //c++11
};

CTest1::CTest1(int val)
{
    m_val = val;
    cout << "constructor: " << m_val << endl;
}

CTest1::~CTest1()
{
    cout << "destructor: " << m_val << endl;
}

int main()
{
    /*
    CTest test0(1.1);
    CTest test1 = CTest(1.2);
    
    test0 = 1.3;
    
    test0 = 1;
    test0 = (CTest)1;
    */
    
    /*
    CTest test0(1.1);
    double val = test0;
    int intVal = (int)test0;
    */
    
    char* buff = new char[1014];
    cout << "buff addr: " << hex << (unsigned) buff << endl;

    CTest1* ptr1 = new (buff) CTest1(5);
    cout << "ptr1 addr: " << hex << (unsigned) ptr1 << endl;
    ptr1->~CTest1();

    delete buff;
    return 0;
}


