/*
 * @Author: Chieh
 * @Description: Practice how to use pointer 2 / Please start from 1
 * @FilePath: pointer_practice_2.cpp
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

    int * r;
    r = new int;
    *r = 100;
    cout << r << endl; 
    cout << *r << endl;

    // Two pointers point to same memory address.
    int * s = r;
    *s = 200;
    cout << *r << endl;

    // "delete" is to release that one memory address.
    // Not "remove" that both pointers
    // In other word, you still can re-use that both pointers.
    delete r;
    cout << r << endl;
    cout << *r << endl;

    cout << s << endl;
    cout << *s << endl;

    r = new int;
    *r = 300;
    cout << r << endl;
    cout << *r << endl;
}