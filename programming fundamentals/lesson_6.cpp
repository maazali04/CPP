// -------------------------- Lesson 5 --------------------------

#include <iostream>
#define X 25; // Note: Semicolon is often omitted for cleaner macro usage

// Macros are a preprocessor directive that enables text substitution before the compilation process begins. 

// Execution Flow:
// 1. The preprocessor runs first and substitutes the macro name (e.g., X) with its value (e.g., 25).
// 2. After substitution, the compiler receives the modified code.

// Example of Substitution:
// If the code contains 'int result = X * 2;', the preprocessor replaces it to 'int result = 25 * 2;' before compilation starts.

// Memory Distinction:
// A macro will not store in the memory like a variable. It is a text replacement tool.
// The variable is stored in memory first and then its value is retrieved during compilation/runtime, 
// while the macro is merely replaced with its value before compilation begins.

// Use Case: Symbolic Constants
// Macros are often used to define symbolic constants, which are descriptive names given to constant values.

// Note: Macros are not typically used for defining variables (which are stored in memory). 
// They are used to create symbolic constants for values or to make datatype definitions shorter.

// Example of Type Aliasing:
#define LL long long int; // So, instead of typing 'long long int' repeatedly, we simply use 'LL'.
// This is similar to Python's 'as' keyword, like 'import pandas as pd'.

// Redefining Macros:
// What if we try to change the value of a macro using the define keyword again?
#define X 30; // comment it as it will produce warning
// This throws a warning: "X" redefined. You cannot redefine a macro directly.

// The Legal Way to Redefine a Macro:
#undef X          // 1. This directive explicitly undefines (removes) the first macro definition.
#define X 30;      // 2. Now, you can safely redefine the macro. The compiler is not aware 
                   //    of the previous macro because it was undefined before this definition.


using namespace std;

int main()
{
    // Constant: are fixed variable and its value can't be changed.
    const int DAYS_IN_WEEK = 7; // Here it must be initialized.
    // DAYS_IN_WEEK = 8; // error: assignment of read-only variable
    // const int PI; // Error: Uninitialized Error. so you must initialized it.

    // what if we try to change the value of macros
    // x = 10; // it will throw an error, by the way you are just saying to the compiler that 25 = 10! Really?? 😂
    cout << X;

    /*
    Type Casting: conversion of data from one type to another.
    Two types.
    Implicit type conversion (Automatic / type promotion) : this conversion is done by automatically by compiler without the programmer explicit instuction.
    It occur when converting a smaller dataype to a larger datatype. lerger datatype can be higher in size or higher in precision or wider in range. Here the greater datatype will be the output therefore it is called type promotion.
    The hierarchy:
    bool → char → short → int → long → long long → float → double → long double

    e.g. */
    cout << endl
         << 10 / 3 << endl;   // 10 / 3 = 3.333 but int contain only whole numbers not decimal. Here are two int so the result will be int.
    cout << 10 / 3.0 << endl; // Here one is int and the second one is float so the result will be the greater datatype. In this case float has greater precision and wider in range than int.

    // let's add char and int
    cout << 'A' + 1 << endl; // output 66 (int) because int is greater datatype than char.
    // Remember each char value is stored in the memory as number. like 'A' -> 65, 'a' -> 97.

    // let's check for bool and char
    cout << false + 'a' << endl; // 0 + a -> 0 + 97 = 97

    /*
    Explicit Type Conversion: also knownas casting. converting of one datatype to another one manulaly by programmer.
    it is done as :  (datatype) varible.
    e.g. */

    // convert character to int
    cout << (int)'A' << endl;

    // convert int to float
    cout << (float)10 / 3 << endl;

    // convert char to float
    cout << (float)'0';

    // convert float to int
    float PI = 3.14;
    cout << (int)PI << endl; // it loss the numbers right to the decimal.

    // convert to char
    cout << (char)('A' + 1) << endl;

    // convert to bool
    cout << (bool)('A') << endl; // gives 1 other than zeros.

    // Both are different conditions
    cout << (bool)(2 + 3) << endl; // bool (5) -> 1
    cout << (bool)2 + 3 << endl;   // bool (2) -> 1 + 3 -> 4

    cout << "------------------ Next TOPIC: OPERATORS ------------------" << endl;
    /*
    OPERATORS:
    --------- Symbol or keywords that instruct the compiler to perform operation on operands (variables or values)
    e.g. a + b ; here (a+b) is called expression, a and b are called operands and + is called operator.

    Types:
    -----

    * Arithmetic operators
    * Assignment operators
    * Relational operators
    * Logical operators
    * Bitwise operators

    * Arithmetic operators : used to perform mathematical calculation:
    Types:
        * Binary: +, -, *, /, % (Modulo) -> require two operands
        * Unary: increment (++), decrement (--)
    */
    int a = 10, b = 5;
    cout << "+ " << (a + b) << endl;
    cout << "- " << (a - b) << endl;
    cout << "* " << (a * b) << endl;
    cout << "/ " << (a / b) << endl;
    cout << "% " << (a % b) << endl;

    // unary : required one operands
    int number = 3;
    number++;               // number = number + 1
    cout << number << endl; // 3 + 1 = 4
    number--;               // number = number - 1
    cout << number << endl; // 4 - 1 = 3

    // unary: a++ (post increment), ++a (pre increment)
    int check_number = 10;
    check_number++;
    cout << check_number << endl; // 10 + 1 = 11
    ++check_number;
    cout << check_number << endl; // 11 + 1 == 12
    // They are same right? Yes here they are same but!!!
    cout << check_number++ << endl
         << ++check_number << endl; // expected to be 13 and 14 not 12 and 14.
    // let's test different scenario. remember check_number = 14;
    int check_number2 = check_number++;
    cout << check_number2 << endl; // expected 15!! But wait!! 14, why? The reson is simple check_number2 get the value of check_number which was 14. so now check_number2 = 14. then the compiler increases the value of check_number to 15. now if we print check_number then it will print 15. so basically, it assign the old value to the check_number2 and then increase its own value by 1.
    cout << check_number << endl;
    check_number2 = ++check_number; // Now here, first check_number increase its value by 1 and then assign it to the check_number2. so the overall value of check_number2 becomes of the check_number.
    cout << check_number2 << endl;

    /*
    Assignment Operators:
    -------------------- used to assign value to a variable.
    e.g. +, +=, -=, *=, /=.
    a = b. Here it means that the value of b will be stored in a.
    */
    int assign_number;
    assign_number = 5;  // here 5 value is stored in a.
    assign_number += 5; // 5 + 5 = 10
    cout << "a = a + 5 -> " << assign_number << endl;
    assign_number -= 5; // 10 - 5 = 5
    cout << "a = a + 5 -> " << assign_number << endl;
    assign_number *= 2; // 5 * 2 = 10
    cout << "a = a + 5 -> " << assign_number << endl;
    assign_number /= 5; // 10 / 5 = 2
    cout << "a = a + 5 -> " << assign_number << endl;

    /*
    Relational Operators:
    -------------------- used to compare two operands.
    e.g. ==, !=, >, <, >=, <=.
    return value as bool (true or false). true = 1, false = 0.
    */
    int relational_operand_1 = 5;
    int relational_operand_2 = 10;
    cout << "== " << (relational_operand_1 == relational_operand_2) << endl;
    cout << "!= " << (relational_operand_1 != relational_operand_2) << endl;
    cout << "> " << (relational_operand_1 > relational_operand_2) << endl;
    cout << "< " << (relational_operand_1 < relational_operand_2) << endl;
    cout << "<= " << (relational_operand_1 <= relational_operand_2) << endl;
    cout << ">= " << (relational_operand_1 >= relational_operand_2) << endl;

    /*
    Logical Operators:
    ----------------- Used to combine or negate boolean expression.
    types:
        * Binary Operators: used two operands. And (&&), Or (||)
        * Unary Operator: used one operand. Not (!)
    */

    int logical_operand_1 = 10;
    int logical_operand_2 = 20;
    // && return true if both condition true
    cout << ((logical_operand_1 < logical_operand_2) && (logical_operand_2 > logical_operand_1)) << endl; // here both condition true so resut 1 true

    // || returs true if atleast one condition is true
    cout << ((logical_operand_1 == logical_operand_2) || (logical_operand_1 < logical_operand_2)) << endl; // Here one condition is false and the other is true but it returns true because one of them is true

    // ! - negate the result
    cout << (logical_operand_1 == logical_operand_2) << endl;  // result is false
    cout << !(logical_operand_1 == logical_operand_2) << endl; // return true because it return negate of the output (false -> true)

    // let's check whether BODMAS formula works here or not
    cout << "Checking BODMAS Formula: " << (2 + (3 * 2)) << endl; // it works

    return 0;
}