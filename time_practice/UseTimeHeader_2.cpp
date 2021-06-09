/*
 * @Author: Chieh
 * @Date: 2021-06-09 13:47:13
 * @Description: Practice how to use the time library
 * @FilePath: UseTimeHeader.cpp
 */

#include <iostream>
#include <ctime>
using namespace std;


int main(){

    time_t c;
    time(&c);

    char* d = ctime(&c);
    cout << d << endl;
    return 0;
}

