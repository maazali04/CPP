/* -------------------------- Lesson 3 --------------------------
Keywords:
--------
Keywords are pre-defined, reserved words that have special meanings to the compiler or interpreter. They are the part of the syntax and cann't be used as identifiers.

Identifier:
-----------
An identifier is a unique name that a programmer gives to an entity in a program. It serves as a way to reference and distinguish between different items like variables, functions, classes, and namespaces.

Rule for valid identifier:
--------------------------
    * 1. It can contain alphabets, numbers and underscore.
    * 2. It must start with alphabet or underscore not by number.
    * 3. It's name is case-sensative.
    * 4. It do not contain any special character.
    * 5. You can't assign the cpp reserved keyword to an identifiers.

Naming Convention:
-----------------
camelCase: used for variable and functions (e.g. calculateAverage)
PascleCase: used for classes and constructs (e.g. UserAccount)
snake_case: used for macros, varibale and functions (e.g. TOTAL_COST, calculate_average)
Descriptive names: used to describe the purpose of identifiers. (numberOfStudents)


Variable:
---------
variable is a name given to a memory location. e.g. int x = 25; here 25 value is stored in the memory at location x as an integer (havign 4 bytes). so here overall term (int x = 25) is used for variable (int x = 25) but x is ( identifiers). just take an example of function we say overall code is the function.
All the variabels are identifiers but not all identifiers are variables as identifiers can contain  functions, class, namespace, etc.
syntax : datatype variablename = value;

Data Types:
----------
Data types are essential keywords that define the kind of a value a variable can hold, how much memory is needed, and what operations can be performed on it.
e.g. int x = 10; here int is datatype.

variable is divided into two categories (by datatype (what they store) and by scope (where it can be accessed))

On the basis of datatype: 
    * Primitive
    * Derivaties
    * User-defined.


Primitive Datatypes: also known as built-in or fundamental datatypes are the basic types that are predefined in the language. e.g. bool, char,int, float, double, void.

Derived datatypes: Derived data types are types that are created from or depend upon the primitive (built-in) data types. e.g. array, pointers, reference, and functions.

User defined data types: User defined data types are those data types that are defined by the user himself. e.g. struct, class, enum, union, 

on the basis of socpe and life-time: 
    * local (built and destroyed within the same funciton and only be access through the same function);
    * global (build outside the main fucntion and destroyed when the program terminates and can be access anywhere);
    * static local variable (built within function but terminates when the program ends. not access outside the function)
    * Members variables (declared inside the class, access to the object of the class only. created with object creation and destroyed with object destruction)
*/

#include <iostream>
#include <iomanip>
#include <string>
#include "your_code.cpp"
using namespace std;

// function
void circle()
{cout<<"Circle"<<endl;
int local_var = 10; // local variable
}

int increment(){
    static int static_local_Var = 10;
    return static_local_Var += 1;
}

int global_Var = 30;

// class
class Student {
    public: 
    // members variables (declared inside the class, access to the object of the class only. created with object creation and destroyed with object destruction) e.g. student_name, roll_number and location are member variables. 
    string student_name;
    string roll_number;
    string location;
    
};

int global_variable_value;

int main()
{

    // primitive datatypes
    // Bool: used to store  logical values (True or False).
    bool is_coding_fun = true;          // true -> 1
    bool my_code_contain_error = false; // False -> 0

    // to find the allocated memory we use sizeof(), here sizeof either take identifier, or datatype and returns its allocated memory size.
    cout << sizeof(is_coding_fun) << endl; // 1 byte

    // Char : store single character
    char single_character_1 = 'A';
    char single_character_2 = 'z';
    cout << sizeof(single_character_1) << endl; // 1 byte

    // int : store value of postive, zero and negative numbers
    int age = 45;
    int driving_age_limit = 18;
    cout << sizeof(age) << endl; // 4 bytes

    // float: store value of decimal number
    float average = 2.5;
    float price = 99.0;
    cout << sizeof(average) << endl; // 4 bytes

    // Double: used for higher precision, mainly for scientific values.
    double double1 = 10.99999;
    cout << sizeof(double1) << endl; // 8 bytes

    // difference between float and double.
    // one is range. float store 4 bytes, while double store 8 bytes.
    // other is precision.
    float checking_float = 9.1234567890;
    double checking_double = 9.1234567890;
    cout << setprecision(11) << "Float: " << checking_float << " , Double: " << checking_double << endl;

    // last one is void. but it is not use with varibles, but can use with funcitons.

    // Modifiers: You can use modifiers with the primitive types to change their size or range:
    // short: smaller integer type
    short small_1 = 2; // same as short int smalle_1 = 2
    short small_2 = 10;
    cout << sizeof(short) << endl; // 2 bytes.

    // long: larger integer type
    long long_1 = 100; // same as long int long_1 = 100
    long long_2 = 10000;
    cout << sizeof(long_1) << endl; // 4 or 8 bytes

    // long long: even larger than integer
    long long long_long_1 = 100000000; // same as long long int long_long_1 = 100000000
    long long long_long_2 = 10000000000;
    cout << sizeof(long_long_2) << endl; // 8 bytes

    // signed or unsigned to hold negative values
    signed int can_contain_negative = -90; // use 1 bit to store the sign and others bytes for value. It contain 0, positive or negatives. value = -2 billion to 2 billion.
    unsigned int only_positive = 100;      // contain twice value as signed variable, because it uses entire 4 bytes. it contains 0 and positives. value = 0 to 4 billion.

    // difference between char and wchar_t
    // char wc_kanji = L'日'; // throws an error because 日 is out of 256 characters that it store.
    wchar_t wc_kanji = L'日'; // Japanese character
    // By the way, L used for long, and it tells the compiler to store the value other than ASCII character which require 1 byte.

    // long double: Extended-precision floating-pointed number
    double double_1 = 1.0 / 3.0;
    long double long_double_1 = 1.0 / 3.0;
    cout << double_1 << setprecision(40) << endl
         << long_double_1 << setprecision(40) << endl;
    cout << sizeof(long_double_1) << endl; // 16 bytes
    

    // Derived datatypes:
    // Array : A collection of fixed-size elements of the same data type, stored in contiguous memory locations.
    int scores[5] = {90,99,91,93,95}; // it stores 5 int, so it is derived datatypes

    // Pointers: Variables that hold the memory address of another variable.
    int pointer_variable = 20;
    // cout<<&pointer_variable<<endl;  & is Adress-of operator. -> used to give memory address of variable
    int* ptr = &pointer_variable; // * (pointer declaration) is used to make pointer
    cout<<ptr<<endl;
    cout<<*ptr<<endl; // * (Dereference operator): Accesses the value stored at that address.

    // Function: Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.
    circle();
    circle();

    // D. References (The Quick Alias): It is essentially the original variable with a different name.
    int original = 10;
    int& alias = original; // here & works as reference declarator
    alias = 20;
    cout<<original<<endl;


    // User defined datatype
    // A structure is a way to group variables of different data types together under a single name.
    struct student {
        string full_name;
        int roll_number;
        string location;
    };

    // int x = 10;
    student maaz;
    maaz.full_name = "Maaz Ali";
    maaz.roll_number = 14;
    maaz.location = "Kabal Swat";

    cout<<maaz.location<<endl;

    // class: A class is the backbone of Object-Oriented Programming (OOP) in C++. It is an extension of a struct because it can contain not just data, but also functions (called methods) that operate on that data.
    Student Sudais;
    Sudais.student_name = "Sudais";
    Sudais.location = "Haji Abad";
    Sudais.roll_number = 15;

    // Union : like struct used to group data of different type into a single type. But in union, all members share the same memory location.
    union union_1{
        int a;
        char b;
    };

    union_1 un_1;
    un_1.a = 65;
    cout<<un_1.a<<" "<<un_1.b<<endl;

    // enum: used to store constants;
    enum Week { Mon, Tue, Wed, Thur, Fri, Sat, Sun };
    Week day;
    day = Tue;
    cout<<day<<endl;

    // datatypes on the bases of scope and lifetime
    // cout<<local_var<<endl;
    cout<<global_Var<<endl;
    // cout<<static_local_var<<endl; not accessible
    cout<<increment()<<endl; // static but not destroyed. 
    cout<<increment()<<endl;

    // ------------------------------ END of Datatypes ---------------------

    // Declaration: A declaration introduces a name (for a variable, function or class) to the compiler. It tells the compiler that this name exists, and how to interact with it.It provides the signature or blueprint but does not allocate memory or provide the implementation details.
    // e.g. int sum (int a, int b);

    // Definition: it refers to the point where an entity, such as a variable, function, or class, is fully specified and storage is allocated for it.
    // e.g. int sum(int a, int b){return a+b};

    // Initialization: it is the process of giving a variable its first value at the time it is defined. This term is specific to the variable. 
    // e.g. int x = 10;

    int var1; // here it is declared and defined. defined in a sense that it takes memory. 
    int var2 = 10; // here it is declared, defined and initialized.

    int sum (int a, int b); // here it is declared not defined (no body code.)


    // global variable value and local variable values
    int local_variable_value;

    cout<<global_variable_value<<endl; // it means that global variable is assign 0 by default. 
    cout<<local_variable_value<<endl; // local variable contains garbage value. so it means that it assign memory address to the variable and the memory address is previously used by something else. 

    // can we declare variable only?
    extern int file_var;
    cout<<file_var<<endl;
 
    
    return 0;
}