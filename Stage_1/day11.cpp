#include "day11.h"

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
