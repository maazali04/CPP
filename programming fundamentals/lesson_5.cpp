// -------------------------- Lesson 4 --------------------------
// Variables

#include <iostream>
using namespace std;

int main()
{
    // int takes 4 bytes. 1 byte = 8 bits. 4 bytes = 32 bits.
    // 2 ^ 32 = 4294967296.

    // int limit = 4294967296; // overflow
    // int limit = 4294967295; // -1
    // int limit = 4294967294; // -2
    // cout<<limit<<endl;

    /* Note: There are three common systems for representing signed numbers:

    * 1) Signed number representation / signed bit:
        -------------------------------------------
        Here the left most bit is used for sign and the resut for magnitude. (0 for positive, 1 for negative).
        e.g. take a nibble as an example: (1 nibble = 4 bits)
        positives:
        0000 -> +0
        0001 -> +1
        0010 -> +2
        0011 -> +3
        0100 -> +4
        0101 -> +5
        0110 -> +6
        0111 -> +7

        negatives:
        msb (most significant bit) : 1st bit on the left.
        1000 -> -0
        1001 -> -1
        1010 -> -2
        1011 -> -3
        1100 -> -4
        1101 -> -5
        1110 -> -6
        1111 -> -7

        range: -7 to +7

        Drawbacks:
        ---------
        * two zeros (+ and -).(circuit designer may be fraustrated)
        * Binary addition doesn't work. e.g. 0010 -> 2, and 1010 -> -2, now let's add them         2 - 2 = 0, but here 0010 + 1010 -> 1100 = -4.


    * 2) 1's Complement System:
    --------------------------
    * Positive same as signed bit.
    * For Negative just invert every bit.

    e.g.
    positives:
    0000 -> +0
    0001 -> +1
    0010 -> +2
    0011 -> +3
    0100 -> +4
    0101 -> +5
    0110 -> +6
    0111 -> +7

    negatives:
    1111 -> -0
    1110 -> -1
    1101 -> -2
    1100 -> -3
    1011 -> -4
    1010 -> -5
    1001 -> -6
    1000 -> -7

    range: -7 to +7

    Drawback:
    ---------
    * we got two zeros, +0, -0!
    * Amazingly it works. 2 + (-2) = 0, 0010 + 1101 = 1111 (-0)
    * sometimes it give us mathematical error so we need to bring back the lef most bit and add to the right most bit to get the result. +7 + (-2) = +4 , 0111 + 1101 = (1)0100, by applying rule 0100 + 1 = 0101 = + 5.
     
    
    * 2) Two Complement System:
    ---------------------------
    Two complement system is a clever way to store the integers so that common math problems are very simple to implement.

    e.g. 
    positives:
    0000 -> +0
    0001 -> +1
    0010 -> +2
    0011 -> +3
    0100 -> +4
    0101 -> +5
    0110 -> +6
    0111 -> +7

    negatives:
    - flip all the bits and then add 1 to it.
    let's convert +0 to -0. 
    1111 + 1 = (1)0000 = +0. here 1 is discarded because an overflow occurs. so the remaining is 0000 which is +0.
    1110 + 1 = 1111 -> -1
    1110 -> -2 
    1101 -> -3
    1100 -> -4
    1011 -> -5
    1010 -> -6
    1001 -> -7
    1000 -> -8 = most negative values.

    Remeber: 
        * if we use 8 which codes into 1000 then compiler reads it as -8. so the code converts into -8.
        * if we convert 9 into binary then it converts into 1001 which turns into -7.
        * if we convert 15 then it will turns into -1.
        * if we convert 16 then it will convert into 10000 then it will exceeds the limit which will cause an overflow. and the output will be 0 because then 1 is removed and the rest is kept. (0000)
         
    range: -8 to +7.

    We use two complement system nowadays.

    Note: 2 ^ 4 = 16. 16/2 = 8. 8 is negative values. 1 iz zero and 8 - 1 = 7 is positive
    Note: Did you notice that all the positives starts from 0 and negatives from 1. that byte is calles msb (most significant bit)
    Note: 4 bits: 2 ^ 4 = 16 numbers. here +7 are positives, 1 is zero and -8 are negatives.

*/

    // int can store 4 bytes = 32 bits. 2 ^ 32 = 4294967296 so it means that it has 4294967296 / 2 = 2147483648 negative. 1 is zero and 2147483647  postive numbers.

    // it means that incresing the limit of positives 2147483647 will cause an overflow. 

    int positive_value = 2147483647;
    cout<<positive_value<<endl; // most positive values

    int positive_limit_cross = 2147483648; 
    cout<<positive_limit_cross<<endl; // most negative value

    int within_range = 4294967295; // last value so -1
    cout<<within_range<<endl;

    // int positive_limit_cross_new = 4294967296; // overflow occurs as the space is less and the value is bigger.  // if you increase value by one then the outcome will be increases by one. 
    // cout<<positive_limit_cross_new<<endl;
    
    unsigned int negative_1 = -1; // 11111111 11111111 11111111 11111111 but in unsigned number it is taken as positive number so it will print the last max value. 4294967295.
    cout<<negative_1<<endl;

    unsigned int negative_2 = -2; // it will print 4294967294. by decreasing a value by 1 then output will decrease by 1 too 
    cout<<negative_2<<endl;

    unsigned negative_3 = -2147483648; // at this point the - value equals to +. by increaseing 8 to 9 then overflow will occur. 
    cout<<negative_3<<endl;

    // can we put signed with float?
    // signed float yy = 10; // signed value only used with int not with others.

    // print bool as true not 1
    bool is_cpp_easy = true;
    cout<<boolalpha<<is_cpp_easy<<endl;

    // now to reset it
    cout<<noboolalpha<< is_cpp_easy<<endl;

    // last topic: take input from the user
    // To take input from user we use the word cin along with >> (extraction operator)
    int input;
    cin>>input;
    cout<<input;

    return 0;
}