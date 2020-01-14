# Notes:

Source from : [C++ 入門指南](http://kaiching.org/pydoing/cpp.htmls)

## Day1

1. `#include` : import libraries
2. `using namespace std;` : std is the namespace of standard lib for program
3. `cout <<` : do it. The order starts from left to right.

---
## Day2

C++ ```string m(" words ")``` == Python ```  m = str("words")```

---
## Day3

1. `* star` is using to store the memory location.
2. `&` this one is using to get the memory location of object

    If & is put on left side, it is meaning "Declare"

    For example: 
    C++ ```string &c = a``` == Python  ``` c = a ```.

3. ```string a = "There is string.";```  == ```string *a = new string("There is string.");```

---
## Day4

Expression = operand + operator

single operand can construct a expression. Operand can be variable, literal, function, or member.

In general, one operator should be combined with two operands.
For example, arithmetic operator can use in `integer` and `floating-point number`, and its results are also being integer or floating-point number.

Equality and relational operator can use in `integer`, `floating-point number`, or `Boolean value`, and its reulst is either true or false.

The `= (equal sign)` belongs to `assignment operator`.

---
## Day5 [If-else]

if
```
if ( Condition ) {

}
```
if-else
```
if ( Condition ) {
 
} else {

} 
```
if-else if-else else
```
if ( Condition ) {

} else if ( Condition ){

} else {

}
```

Keywords: Switch, case, break, default.

Statement:
1. if statement
2. switch statement
3. break statement
4. compound statement
   1. selection structure
   2. repetition structure (Loop)

---
## Day6 [Loop]

Repetition structure:
1. while loop
2. for loop
3. do-while loop

`For loop` must provide two `;` in the condition area.

---
## Day7 [Function]

If your function prototype puts after the main(), you must add a declaration at the beginning.

---
## Day8 [CLASS]

- Public : Like a global variable 
- Private : Like a local variable

Keywords: access label (Public, private, protected), encapsulation

Don't forget to add a `semicolon` in the end of class.

```
class XXX {


};
```

Access label needs to add a colon `:` in the end.


---
## Day9 [Encapsulation]

Object-oriented programming : Encapsulation, Inheritance, Polymorphism

---
## Day10 [Constructor]

If there are many parameters in a function, it calls `overloaded fucntion`.

Need to be careful the datatype, because c++ is a `strong typing` program language. 

For example, don't add a double nubmer and an int nubmer. You should change them being same dataype first.

```
double subtract(double a, int b) {
    double c = (double) b;
    return a - c;
}
```

Please be careful about that if you are setting a constructor function, your name should be same with class name.

```
class_practice::class_practice(){
}

class_practice::class_practice(int x){
}

class_practice::class_practice(int x, int y){
}
```

---
## Day11 [Header file]

> c++ programm file is `.cpp` format, and header file is `.h` format.

Mainly we let day10.cpp separate three files in day11.

- day11.h : put class declaration in this file.
- day11.cpp : put the function of class in this file.
- day11_main.cpp : put main function in this file.

Then when you compiler this file, you need to compiler two files including day11.cpp and day11_main.cpp at the same time.

Command:
```
g++ day11.cpp day11_main.cpp -o day11.out -W
```
