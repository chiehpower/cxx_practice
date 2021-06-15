/*
 * @Author: Chieh
 * @Description: Practice how to pointer being arguments.
 * @FilePath: pointer_arguments.cpp
 * @Source : https://cpproadadvanced.blogspot.com/
 */


#include <iostream>
using namespace std;

#include "myheader.h"

int main() {

    int a = 10;

    // arugment should put the memory address
    showValue(&a);

    int * b = new int;
    *b = 20;
    showValue(b);

    int *p;
    p = &a;
    showValue(p);

    // or this one
    p = b;
    showValue(p);

    int value = 1;
    // value = passByValue(value);
    passByValue(value);
    cout << value << endl;

    passByPoint(&value);
    cout << value << endl;

    return 0;

}