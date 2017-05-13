/*************************************************************************
    > File Name: type.cpp
    > Author: goldbeef
    > Mail: goldbeef@163.com 
    > Created Time: 2016年12月11日 星期日 09时35分42秒
 ************************************************************************/

#include <iostream>
#include <climits>

using namespace std;


int main()
{
    int intVal;
    intVal = INT_MAX;
    cout << sizeof(int) << endl;
    cout << intVal << endl;
 
    cout << hex;
    cout << intVal << endl; 
    
    
    cout << intVal << endl; 
   
    intVal = 1024ULL;
    cout << intVal << endl;
 
    const int val = 1024;
    cout << val << endl;
    
    //val = 0;
    
    //const int key ;
    auto name = 1.5;
    cout << sizeof(name) << endl;
    return 0;
}
