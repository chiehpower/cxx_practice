#include <iostream>

using namespace std;

// declaration
int comparsion(int, int);
void PrintNewline(void);

int main(void) {
    
    PrintNewline();
    cout << comparsion(12, 2) << " is bigger!";
    PrintNewline();
    return 0;
}

// Define your function
int comparsion(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

void PrintNewline(void) {
    cout << endl;
}