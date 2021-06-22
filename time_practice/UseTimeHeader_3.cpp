/*
 * @Author: Chieh
 * @Date: 2021-06-09 13:47:13
 * @Description: Practice how to use the time library
 * @FilePath: UseTimeHeader_3.cpp
 * @Source : https://cpproadadvanced.blogspot.com/
 */

#include <iostream>
#include <ctime>
using namespace std;


int main(){

    // if you only use struct tm t; 
    // There are many values inside! so it is quite hard to assign all of values to initialize.
    // Hence, we can use this way. 

    struct tm t = {0}; 
    t.tm_year = 2019 - 1900; // it is better to substrct 1900 before we get the value 
    t.tm_mon = 12 - 1 ; 
    t.tm_mday = 19;

    // this way is more safet   y
    cout << t.tm_year + 1900 << "/" << t.tm_mon + 1 << "/" << t.tm_mday << endl;

    return 0;
}

