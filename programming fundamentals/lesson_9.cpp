#include <iostream>
using namespace std;

// Function: Block of code which run when it is called.
/*
We should use datatype that it returns it before the function name. just like our main function return 0 which is int so we wrote in main().
What if our function doesn't return anything. we use the word void() which mean empty, before the function.
syntax : returntype identifier () { code execution, return value.}
so now we learn how to make function but how to call it. just use identifier() simple!.
*/

// return-type function-name (parameter1,...){function-body}
void sayHello()
{
    cout << "Hello World!" << endl;
}

// can we call one function in other function
void assistance()
{
    sayHello();
    cout << "Done!" << endl;
}

// what if don't add something to return
// func_no_return (){
//     cout<<"This function don't return anything!";
// } // it throws an error : required type

// what if add datatype but don't include return
// int number_return(){
//     cout<<"It doesn't return anything!"<<endl;
// } // it also throws an error

// void sayHello() -> declaration;
// cout<<"Hi"<<end; -> definition;
// Forward Declaration : when we declare function first and then define it. we do it because if we don't declare it then it will cause an error

void forward_declaration();

// In C++, a parameter of a function is a variable declared in the function's definition or prototype that receives a value when the function is called.

int Sum(int a, int b)
{ // Here a and b are parameters
    int sum = a + b;
    return sum;
}

// how to make function with default parameter
int default_parameter_func(int a = 10, int b = 10)
{
    return (a + b);
}

// Scope in C++ defines the region of the program where a declared identifier (such as a variable, function, class, or constant) is valid and accessible.

// two types

// local scope : which can be access only within the code and not outside of it.
// e.g. function scope, if-else scope, for scope
void myFunc()
{
    int local_scope_func = 10; // Here it can't be access outside of this function.
    if (local_scope_func < 12)
    {
        int local_scope_if = 10; // it also can't be access outside of this if.
    }
    // similarly i,j of for loop are also local scope.
}

// A variable declared outside of any function, class, or namespace is said to have global scope.
int global_var = 10;

// Multiple function with the same name but with different parameters -> Function Overloading
// different parameters -> means datatype of parameter is different or number of parameter is different.

float area(float side)
{
    float square_area = (side * side);
    return square_area;
}

float area(float width, float height)
{
    float rectangle_area = width * height;
    return rectangle_area;
}

int main()
{
    sayHello();
    sayHello(); // we can call functin multiple times
    assistance();
    // number_return();
    forward_declaration();
    cout << Sum(2, 3) << endl;                    // here 2 and 3 are called arguments. it must be noted that without giving argument our function will not work.
    cout << default_parameter_func() << endl;     // all of three works. with no arguments
    cout << default_parameter_func(9) << endl;    // with one arguments
    cout << default_parameter_func(9, 9) << endl; // with two arguments

    cout << global_var << endl;

    // Compiler automatically detect that
    cout << area(4) << endl;    // this for square area
    cout << area(4, 5) << endl; // and this for rectangle area

    return 0;
}

// definition
void forward_declaration()
{
    cout << "Forward Declaration" << endl;
}
