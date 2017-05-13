#include <iostream>
#include <new>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

namespace TEST1 
{   
    int int_test1;
    int int_test2;
}


//using namespace TEST1;
int int_test1;

//ambigous error
//int_test1 = 10;

/*
//redeclare error 
//
int int_test1;
using TEST1::int_test1;

*/

namespace 
{
    int int_global;    
}

int main()
{
#if 0
    int *intPtr = new int;
    int *arrayPtr = new int[10];
    cout << hex << intPtr << ", " << arrayPtr << endl;
    cout << endl;
    delete intPtr;
    delete [] arrayPtr;
#endif 

    /*
    error
    intPtr = new(sizeof(int));
    arrayPtr = new(10*sizeof(int));
    cout << hex << intPtr << ", " << arrayPtr << endl;
    cout << endl;
    delete intPtr;
    delete [] arrayPtr;
    */

#if 0
    char buff[1025];
    char* ptr = buff;
    int* intPtr = new (buff) int;
    int* arrayPtr = new (buff) int [10];
    cout << hex << static_cast<void *> (ptr) << ", " 
        << static_cast<void *> (intPtr) 
        << ", " << static_cast<void*> (arrayPtr) << endl;

    printf("%p, %p, %p\n", ptr, intPtr, arrayPtr);

    //delete intPtr; //error
    //delete arrayPtr; //error
#endif 
   
    /*
    int_test1 = 100;
    cout << ::int_test1 << endl;
    cout << TEST1::int_test1 << endl;
    */
    
    /*
    //error
    int int_test1;
    using TEST1::int_test1;
    */

    using namespace TEST1;
    int int_test1;
    int_test1 = 10;
    
    int_global = 0;
    return 0;
}
