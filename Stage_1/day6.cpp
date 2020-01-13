#include <iostream>

using namespace std;

int main(void) {
    
    // while loop
    int i = 10; 
    while (i > 0) {
        cout << i << endl;
        i--; 
    }

    // for loop
    for (int i = 10; i > 0; i--) {
        cout << i << endl;
    }

    // do-while loop 
    int i = 10; 
    do {
        cout << i << endl;
        i--;
    } while (i > 0);

    return 0;
}

