
/*
 * @Author: Chieh
 * @Description: Practice how to use pointer
 * @FilePath: pointer_practice.cpp
 * @Source : https://cpproadadvanced.blogspot.com/
 */

#include <iostream>
using namespace std;

int main() {
    int a;
    a = 8; 

    int * p; 

    p = &a;
    cout << p << endl;

    // Adding one * is to "manage" that storing memory address.
    // In other word, taking the value of it managing memory address.

    *p = 10;
    cout << *p << endl;
    cout << a << endl;

    // We use pointer to manage the memory address.

    // Sometimes we usually see that kind of way.
    // so it will easily get confusion that if we need to use &a , 
    // q also need to add * (star), but that is not correct.
    int * q = &a;
    *q = 20;

    cout << a << endl;

}