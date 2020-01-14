#include <iostream>

using namespace std;

class class_practice {

public:
    class_practice();
    class_practice(int x);
    class_practice(int x, int y);
    void set_a(int n);
    void set_b(int n);
    int accessor_function_aa();
    int accessor_function_bb();
    int get_aa_bb();

private:
    int aa;
    int bb;
    
};


class_practice::class_practice(){
    set_a(100);
    set_b(100);
}

class_practice::class_practice(int x){
    set_a(x);
    set_b(x);
}

class_practice::class_practice(int x, int y){
    set_a(x);
    set_b(y);
}

// 

void class_practice::set_a(int x){
    aa = x;
}

void class_practice::set_b(int x){
    bb = x;
}

int class_practice::accessor_function_aa(){
    return aa;
}

int class_practice::accessor_function_bb(){
    return bb;
}

int class_practice::get_aa_bb(){
    return accessor_function_aa()*accessor_function_bb(); 
}

// 

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