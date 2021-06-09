/*
 * @Author: Chieh
 * @Date: 2021-06-09 13:47:13
 * @Description: Practice how to use the time library / Learn how to use API and review the C++ pointer.
 * @FilePath: UseTimeHeader.cpp
 */

#include <iostream>
#include <ctime>
using namespace std;


int main(){

    time_t a = time(NULL);
    cout << a << endl;

    // The memory address of a is gotten by &.
    char* b = ctime(&a);
    cout << b << endl;

    return 0;
}

