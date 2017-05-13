/*************************************************************************
    > File Name: complexType.cpp
    > Author: goldbeef
    > Mail: goldbeef@163.com 
    > Created Time: 2016年12月13日 星期二 08时40分27秒
 ************************************************************************/

#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main()
{

#if 0
    int n = 9;
    int array[n];
    cout << sizeof(array) / sizeof(int) << endl;
    
    char ch;
    ch = 's';
    cout << ch << endl;

    /*
    ch = "s"; //error
    cout << ch << endl;
    */
    cout << "hello"
    "world" << endl;
#endif
    
#if 0
    char buff1[256];
    char buff2[256];
    cin.getline(buff1, sizeof(buff1));
    cin.getline(buff2, sizeof(buff2));
    cout << buff1 << "," << buff2 << endl;
#endif 

#if 0
    char buff1[256];
    char buff2[256];
    cin.get(buff1, sizeof(buff1)).get();
    cin.get(buff2, sizeof(buff2)).get();
    cout << buff1 << "," << buff2 << endl;
#endif     

#if 0
    array<int, 4> arrayName;
    vector<int> vecName;
#endif 

#if 0
    int i;
    (i)++;
#endif 

    int array[3] = {3, 2, 1};
    for(int val : array)
    {
        cout << val << endl;
    }
    return 0;

}
