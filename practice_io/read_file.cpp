#include <iostream>
#include <fstream>
using namespace std;
#include <string>

int main(){
    string path = "";
    cout << "Please type the output file path: ";
    cin >> path;
    ofstream myfile;
    myfile.open(path);
    myfile << "Writing this to a file\n" ; 
    myfile.close();
    return 0;
}

