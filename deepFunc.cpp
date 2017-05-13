/*************************************************************************
    > File Name: deepFunc.cpp
    > Author: goldbeef
    > Mail: goldbeef@163.com 
    > Created Time: 2016年12月16日 星期五 07时52分39秒
 ************************************************************************/

#include <iostream>
using namespace std;

inline int square(double val) { return val * val; }
int refSquare(double& val) { return val * val; }

int refLonglong(long long & llVal) { return 0; }
int refConstLonglong(const long long & llVal) { return 0; }

int& returnRef(int& val) { return val;}
const int& returnConstRef(int& val) { return val;}

/*
 error
int& errorRetRef() {
    int val;
    return val;
}
*/


int fun1(int val) {
    return 0;
}

int fun1(int& val) {
    return 0;
}

struct Job
{
    int mem1;
    int mem2;
};

template <typename T>
void mySwap(T &left, T &right)
{
    cout << "comm template, begin" << endl; 
    T tmp;
    tmp = left;
    left = right;
    right = tmp;
    cout << "comm template, end" << endl; 
}


template <> 
//void mySwap (Job& left, Job& right)
void mySwap<Job> (Job& left, Job& right)
{
    cout << "explicit specialization, begin" << endl; 
    Job tmp;
    tmp = left;
    left.mem1 = right.mem1;
    right.mem1 = tmp.mem1;
    cout << "explicit specialization, end" << endl; 
}

template 
void mySwap<short>(short& left, short& right);

template <typename T>
void show(T array[], int len)
{
    cout << "show <T, len>" << endl;
    for (int i = 0; i < len; i++)
    {
        cout << hex << array[i] << endl;
    }
    cout << endl;    
}

template <typename T>
void show(T* array[], int len)
{
    cout << "show <T*, len>" << endl;
    for (int i = 0; i < len; i++)
    {
        cout << hex << *(array[i]) << endl;
    }
    cout << endl;    
}


template <typename T>
T myLess(T a, T b)
{
    cout << "comm template" << endl;
    return (a < b) ? a : b;
}

int myLess(int a, int b)
{
    cout << "not template" << endl;
    return (a < b) ? a : b;
}

template <typename T1, typename T2>
void add(T1 val1, T2 val2)
{
    //?type? sum = val1 + val2; //error, c++98 
    decltype(val1 + val2) sum = val1 + val2; //succ,c++11
}

template <typename T1, typename T2>
auto addRet(T1 val1, T2 val2) -> decltype(val1 + val2)
{
    decltype(val1 + val2) sum = val1 + val2; //succ,c++11
    return sum;
}

int main()
{

#if 0
    double val = 10;
    double res = square(val);
    
    double & fRef = val;
    //double & fRef1 = 1.1; //error
    //double & fRef2 = val + 1; //error 

    refSquare(val);
    //refSquare(val + 1); //error
    
    int intVal;
    //long long & refInt = intVal;//error
    //refLonglong(intVal); //error
    

    int && rightRef = 3;
    rightRef = 2;
    cout << rightRef << endl;
    
    int intVal1;
    int &refInt = returnRef(intVal1);
    cout << hex << &intVal1 << endl;
    cout << hex << &refInt << endl;
 
    // int &refInt1 = errorRetRef(); //compile error
    
    int val2;
    //fun1(val2); //error
#endif

#if 0
    int val1, val2;
    val1 = 1;
    val2 = 2;
    mySwap(val1, val2);
    cout << val1 << ", " << val2 << endl;
    cout << endl;  

    Job job1 = {1, 1};
    Job job2 = {2, 2};
    cout << job1.mem1 << ", " << job1.mem2 << endl; 
    cout << job2.mem1 << ", " << job2.mem2 << endl; 
    cout << endl;

    mySwap(job1, job2);
    cout << job1.mem1 << ", " << job1.mem2 << endl; 
    cout << job2.mem1 << ", " << job2.mem2 << endl; 
    cout << endl;

    short shortVal1 = 1;
    short shortVal2 = 2;
    mySwap(shortVal1, shortVal2);
    cout << endl;

    mySwap<short>(shortVal1, shortVal2);
    cout << endl;
    
    mySwap<short>(shortVal1, shortVal2);
    cout << endl;
#endif 

#if 0
    int array[3] = {1, 2, 3};
    int* ptrArray[3] = {&array[0], &array[1], &array[2]};
    
    int* ptr = array;
    int** pptr = ptrArray;

    show(ptr, 3);
    show(ptrArray, 3);
#endif 
    
#if 0
    int intVal1, intVal2;
    double dVal1, dVal2;

    intVal1 = 10;
    intVal2 = 20;

    dVal1 = 14.6;
    dVal2 = 9.7;

    cout << myLess(intVal1, intVal2) << endl;
    cout << endl;
    cout << myLess<>(intVal1, intVal2) << endl;
    cout << endl;

    cout << myLess<>(dVal1, dVal2) << endl;
    cout << endl;
    cout << myLess<int>(dVal1, dVal2) << endl;
    cout << endl;
#endif 

#if 0
    int a, b;
    add(a, b);
 
    int iVal1 = 1;
    int iVal2 = 5;

    double dVal1 = 1.1;
    double dVal2 = 5.5;

    cout << addRet(iVal1, iVal2) << endl;
    cout << addRet(iVal1, dVal2) << endl;
    cout << addRet(dVal1, dVal2) << endl;
#endif 

    auto int val1;
    return 0;
}
