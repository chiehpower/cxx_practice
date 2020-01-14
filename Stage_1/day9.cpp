#include <iostream>

using namespace std;

class class_practice {

public:
    int accessor_function_aa();
    int accessor_function_bb();
    void setter_fcuntion_aa(int x);
    void setter_fcuntion_bb(int x);
    int get_aa_bb();

// Remember access label needs to be added a colon
private:
    int aa;
    int bb;

// Remember class needs to be added a semicolon
};

int class_practice::accessor_function_aa(){
    return aa;
}

int class_practice::accessor_function_bb(){
    return bb;
}

void class_practice::setter_fcuntion_aa(int x){
    aa = x;
}

void class_practice::setter_fcuntion_bb(int x){
    bb = x;
}

int class_practice::get_aa_bb(){
    return accessor_function_aa()*accessor_function_bb();
}

int main(void){
    class_practice cp;
    cp.setter_fcuntion_aa(100);
    cp.setter_fcuntion_bb(200);

    cout << endl << cp.get_aa_bb() << endl;

    return 0;
}