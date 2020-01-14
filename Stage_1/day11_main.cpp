#include <iostream>
#include "day11.h"
using namespace std;

int main(void){
    class_practice cp1;
    class_practice cp2(100);
    class_practice cp3(100,200);

    cout << endl;
    cout << cp1.get_aa_bb() << endl;
    cout << cp2.get_aa_bb() << endl;
    cout << cp3.get_aa_bb() << endl;
    cout << endl;   

    return 0;
}