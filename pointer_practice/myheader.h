/*
 * @Author: Chieh
 * @Description: This myheader file is used in pointer_arguments.cpp
 * @FilePath: myheader.h
 * @Source : https://cpproadadvanced.blogspot.com/
 */

#include <iostream>
using namespace std;

// declare
void showValue(int * p);
// int passByValue(int value);

// int passByValue(int value){
//     value += 100;
//     return value;
// }


void passByValue(int value);
void passByPoint(int * pValue);

void showValue(int * p){
cout << *p << endl;
}

void passByValue(int value){
    value += 100;
}
void passByPoint(int * pValue){
    *pValue += 100;
}