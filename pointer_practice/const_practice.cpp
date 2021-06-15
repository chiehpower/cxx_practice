/*
 * @Author: Chieh
 * @Description: Practice how to use const with pointer
 * @FilePath: const_practice.cpp
 * @Source : https://cpproadadvanced.blogspot.com/
 */


#include <iostream>
using namespace std;

int main() {

    int * r;
    r = new int;
    *r = 100;
    cout << r << endl; 
    cout << *r << endl;

    // Two pointers point to same memory address.
    int * s = r;
    *s = 200;
    cout << *r << endl;

    /// Start new part;

    int * const m = new int;
    *m = 100;
    *m = 200;
    cout << *m << endl;
 
    /*
    It will get error if you try to re-new again.

    delete m;
    m = new int;
    */

    const int * n = r;
    // *n = 100;  // Cannot modify n, but you can take the value from n.
    cout << *n << endl;

    n = s;
    cout << *n << endl;

}