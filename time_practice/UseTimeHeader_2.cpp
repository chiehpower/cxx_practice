/*
 * @Author: Chieh
 * @Date: 2021-06-09 13:47:13
 * @Description: Practice how to use the time library
 * @FilePath: UseTimeHeader_2.cpp
 * @Source : https://cpproadadvanced.blogspot.com/
 */

#include <iostream>
#include <ctime>
using namespace std;


int main(){

    // First way to use time()
    time_t c;
    time(&c);

    char* d = ctime(&c);
    cout << d << endl;

    // Second one:
    // time() can accpet pointer or address
    time_t * e = new time_t; // if you use pointer, you need to allocate the memory address.
    time(e);
    char* f = ctime(e);
    cout << f << endl;

    return 0;
}

