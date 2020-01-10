#include <iostream>
#include <string>

using namespace std;

int main(void) {
// in python, n = int(100) or n = 100
    int n = 100;
    cout << n << endl;
// * star is using to store the memory location
// & this one is using to get the memory location of object
    int *nn = &n;
    cout << nn << endl;
    
    int nnn = *nn;
    cout << nnn << endl;
    
    string a = "There is string.";
    cout << a << endl;
    
    string *b = &a;
    cout << b << endl;   

// if & is put on left side, it is meaning "Declare"
    string &c = a;
// so if it is in python, it should be " c = a ".
    cout << c << endl;   

// new should be put in star.
    string *d = new string("There is string.");
    cout << d << endl;
    return 0;
}