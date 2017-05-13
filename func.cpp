/*************************************************************************
    > File Name: func.cpp
    > Author: goldbeef
    > Mail: goldbeef@163.com 
    > Created Time: 2016年12月15日 星期四 08时31分05秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main()
{
#if 0
    int val = 6;
    int *ptr = &val;
    const int *consPtr = &val;
    cout << val << ", " << *ptr << ", " << *consPtr << endl;
#endif
 
#if 0
    const int constVal = 8;
    //int *ptr = &constVal; //error
    const int *consPtr = &constVal;
    cout << constVal << ", " << *consPtr << endl;
#endif 
 
#if 0
    int val = 6;
    int *ptr= &val;
    const int *consPtr = ptr;
    cout << val << ", " << *ptr << ", " << *consPtr << endl;
#endif 

#if 0
    const int val =6;
    const int *consPtr;
    consPtr = &val;

    int * normalPtr;
    //normalPtr = &val; //error
#endif 

#if 0
    int val;
    const int * const ptr = &val;
    int val1;

    ptr = &val1;
    *ptr = 0;
#endif    
    
    int array[4];
    int * ptr1 = array;
    int (*ptr2)[4] = &array;

    cout << hex << ptr1 << "\t" << ptr1 + 1 << endl;
    cout << hex << ptr2 << "\t" << ptr2 + 1 << endl;
    return 0;
}
