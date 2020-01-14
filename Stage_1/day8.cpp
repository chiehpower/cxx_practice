#include <iostream>

using namespace std;

class class_practice {

public:
    int a;
    int b;
    int useittodo();

// Remember class needs to be added a semicolon
};

int class_practice::useittodo(){
    return a+b;
}

int main(void){
    class_practice cp;
    cp.a = 100;
    cp.b = 200;
    cout << endl;
    cout << cp.useittodo() << endl;
    return 0;
}