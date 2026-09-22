#include <iostream>
using namespace std;

// Besides decimal and binary system, there are multiple number system. one of them is hexadecimal sysmte.
/*
Hexadecimal Number System:
-------------------------
    * It contains of 16 digits.
    * Its digits are: 0,1,2,3,4,5,6,7,8,9 and A (10), B (11), C (12), D (13), E (14) , F (15)
    * It is used to represent large binary numbers in few hexadecimal digits. e.g. Binary: 1100 0101 1010 1110 -> Hexadecimal: C5AE.
    * It is used to represent memory addresses.
    * A nibble is a unit of digital information consisting of four bits or half a byte. it represents 1 hexadecimal digit. 4 bit means 16 combination of 1's and 0's. and those 16 combinations can contain every hexadecimal digit can be stored in 4 bits.
    * Hexadecimal number is represent as 0x(digits). e.g. 0x2af4bff93c
---------------------------

How memory store values:
-----------------------
    * Memory is divided into millions or billions of small unit called bytes. Each byte consist of 8 bits. A byte is the smallest unit of memory that can be individually addressed.
    * Every byte has a unique memory address. These addresses are numbered sequentailly starting from 0 up to your memory maximum capacity. (8 GB)
    * when a program needs to save a variable then memory find the empty byte, it store the value and assign the memory address to it. it must be noted when you turned on your computer your memory's each byte has given a specific memory address regardless of whether it is empty or full.
    * e.g. your program runs the code int x = 10; the computer converts the number 10 into its binary form which is 00001010.
    *

*/

// pass by value
void changeA(int parameter)
{
    parameter = 20; // here it makes the copy of actual argument variable, and make changes to it. it doesn't modify the real value of argument.
    cout << parameter << endl;
}

// pass by reference using pointers
void changeA_by_ptr(int *ptr)
{
    *ptr = 99;
    cout << *ptr << endl;
}

// pass by reference using reference variable
void changeA_by_ref_var(int &ref_var)
{
    ref_var = 90;
    cout << ref_var << endl;
}

int main()
{

    // Address of operator. '&' gives the address of a variable.
    // e.g. a = 10, the memory store the value at memory address 0x7920 (it's just for example). then &a will return the memory address of the identifier a.

    int memory_address_var = 10;
    cout << &memory_address_var << endl; // 0xea4f9ff84c, 0x2af4bff93c, every time when you runs it it gives different numbers.

    // pointers: are special variable that store memory addresses of other variables. The size of it is 8 bits in 64 bit system.
    int *ptr = &memory_address_var;                            // int : of which datatype we store the memory of. remember to use * with pointers.
    cout << &memory_address_var << " same as " << ptr << endl; // do not include here * with ptr. (pointer)

    // Now to make the pointer of pointer
    int **pptr = &ptr;
    cout << "The pointer of pointer is " << pptr << endl;

    // * is used for multipurposes. one for multiplicaiton, other for declaring pointers and third for dereferences.
    // Dereference Operator: Get's the value of the variable pointed by any pointer.
    // * operator let us directly access and modify the value of a variable.
    cout << "Address: " << &memory_address_var << ", and value: " << *(&memory_address_var) << endl;
    // modify the value by dereference operator
    *ptr = 55;
    cout << memory_address_var << endl;

    // Null pointer: we assign Null value to a pointer to show that it does not point to any location.

    int *null_ptr = NULL;
    cout << null_ptr << endl; // shows 0.
    // is it mean that null pointer doesn't take any memory? let's check out.
    cout << &null_ptr << endl; // it does. It's point to nothing but it has its own memory.
    // cout<<*null_ptr<<endl; // well in my compiler it doesn't show error. but people say it does!
    // dereference of null pointer is not possible, it will results in error.

    // There are two ways to pass argument to a function:

    // 1) Pass by value: when parameter is a copy of actual argument variable in memory.
    int change_a = 10; // actual argument variable
    changeA(change_a);
    cout << change_a << endl; // change_a remain the same as function only print the copy (then modified version) of it.

    // 2) Pass by reference (pass by address): When we pass the reference of argument to the function. It occurs by two ways: one by passing pointer, and other by reference variables.

    // by pointer
    changeA_by_ptr(&change_a);
    cout << change_a << endl; // here it changes. because the real memory address which store it modified from 10 to 99.

    // Reference variable: is an alternate name (alias) of already existing variable.

    int ref_var = 5;
    int &b = ref_var; // ref_var and b refer to the same location in the memory.
    // note: here & works as reference variable not address of operator. so don't confuse here. one variable can do multiple functions.
    // It must be noted that we must initialize the refernce variable. if we first declare it like  &b; and then initialize it then it will give us error. because it doesn't make any sense. the compiler will wonder that there is nothing of which memory should i give to this reference variable.

    b = 10; // both ref_var and b changes because the refer to the same memory address.
    cout << b << endl;
    cout << ref_var << endl;

    changeA_by_ref_var(b);
    cout << ref_var << endl; // changes both values

    return 0;
}
