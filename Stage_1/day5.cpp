// expression can separate three kinds of methods.
// 1. operand_1
// 2. operand_1 operator operamd_2
// 3. operand1 ? operand_2 : operand_3

#include <iostream>

using namespace std;

int main(void) {
    cout << "Start the program" << endl;

    if (3 > 5) {
        cout << "3 > 5" << endl;
    }
    else if (4 > 5) {
        cout << "4 > 5" << endl;
    }
    else if (5 > 5) {
        cout << "5 > 5" << endl;
    }
    else if (6 > 5) {
        cout << "6 > 5" << endl;
    }
    else {
        cout << "Nothing!" << endl;
    }
    cout << endl;

    cout << "Second Stage!" << endl;
    
    // Switch statement

    switch (10) {
    case 3:
        cout << "3" << endl;
        break;
    
    case 4:
        cout << "4" << endl;
        break;
    
    case 5:
        cout << "5" << endl;
        break;
        
    case 10:
        cout << "10" << endl;
        break;
        
    default:
        cout << "Nothing!" << endl;
    }
    
    cout << endl;
    
    return 0;
}

