#include <iostream>
using namespace std;

// Decimal number system -> 0 to 9 -> 10 digits
// Binary number syste -> 0 and 1 -> 2 digits

// How to convert binary to decimal
// e.g. 10010 represents what? we can write this is: 1 * 2^4 + 0 * 2^3, 0 * 2^2, 1 * 2^1, 0* 2^0. start from the right and put 2 ^ 0 and multiply with the corresponding binary number of it (in this case it is zero) and then move to the left with one increases 2 ^1, 2^2, and so on. thus we can find out that this number equals to which number in decimal form. let's find out.
// 1 * 2^4 + 0 *2^3, 0* 2^2, 1* 2^1, 0* 2^0 = 16 + 0 + 0 + 2 + 0 = 18

// the 0 before the 1 is ignored as it is ignored in the decimal. e.g. 0001 = 1.
// How computer store 18 in byte. computer only store number in byte. even though bit is smallest unit but still 1 byte is used by cpu and memory. as we know that 1 byte = 8 bits, so it can contain 8 spaces for either 1 or 0. so number 18 can be stored as 00010010 this is 8 bits long number 18. it fills up the bits from right and then add 0's in the remaing left bits to make it complete.

// how to convert decimal to binary.
// e.g. 18 to binary. first divide 18 by 2. which is 9 the reminder is 0. then divide 9 by 2 which is 4 the reminder is 1. now divide 4 by 2 which is 2 and reminder is 0 and again by division answer is 1 and reminder is 0. so overall the reminders are 0,1,0,0,1 but we must write the number opposite like 1,0,0,1,0 so it becomes 10010. so 18 in decimal = 10010 in binary.

// Data type modifiers (or simply type modifiers) are keywords in C++ that are applied to the base data types (like int, char, and double) to alter their meaning and storage characteristics.
// These modifiers primarily affect two things: the range of values the variable can hold and the amount of memory it occupies.

// let's write code to convert binary to decimal

void Bin2Dec(int binary_number)
{
    int n = binary_number;
    int decimal_number = 0; // don't use int decimal_number; as it will contain garbage data. which will give wrong output.
    int pow = 1;

    while (n > 0)
    {
        int last_digit = n % 10;
        decimal_number += last_digit * pow;
        pow = pow * 2;
        n = n / 10;
    }
    cout << decimal_number << endl;
}

void Dec2Bin(int decimal_number)
{
    int n = decimal_number;
    int power = 1;
    int binary_number = 0;

    while (n > 0)
    {
        int reminder = n % 2;
        binary_number += reminder * power;
        n = n / 2;
        power *= 10;
    }
    cout << binary_number << endl;
}

int main()
{

    // short and long datatype modifiers are used to decrease or increase the memory size of datatype.

    // if we write long long the compiler automatically detects as long long int

    long long long_long_int = 10;

    cout << sizeof(int) << endl;           // size of int = 4
    cout << sizeof(short int) << endl;     // size of short int = 2
    cout << sizeof(long int) << endl;      // size of long int = 4 or more than 4.
    cout << sizeof(long_long_int) << endl; // size of long long int = 8 or more than 8.

    // every int as signed by default. it means that it can store values negatives, 0 and positives.
    // int is 4 bytes which  means 32 bits so 32 bits for all the integers (+ and -). here half (2 ^ 32/2 = 2^31 ) is positive and half is negative. the range of int is 2 ^ -31 to 2 ^ 31 - 1.

    // 32 bits means here are 32 spaces which contain either 0 or 1. so the first (left most bit) is called MSB (most significant bit). If it contain 0 then it means it is positive and if it contain 1 so that mean it is negative.

    // if we use int (which is signed int by default) so it saves half positives and half negatives. but if we use unsinged int then it will store twice number as signed int becaue it can only store positives, not negatives.

    unsigned int unsigned_int = 10; // now it can store only positives
    unsigned int unsigned_int_negative = -10;
    cout << unsigned_int_negative << endl; // it will print 4294967286. because msb which is 1 in case of -10 here it is used as number not as sign.

    // call Bin2Dec function
    Bin2Dec(100);
    Dec2Bin(4);

    return 0;
}