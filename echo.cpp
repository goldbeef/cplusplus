/*************************************************************************
    > File Name: echo.cpp
    > Author: goldbeef
    > Mail: goldbeef@163.com 
    > Created Time: 2016年12月10日 星期六 15时24分58秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
    int i;
    for (i = 0; i < argc; i++)
    {
        cout << argv[i] << " ";
    }
    cout << endl;
    return 0;
}
