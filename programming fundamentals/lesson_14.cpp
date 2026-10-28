# include <iostream>
# include <string>
using namespace std;

int main(){

    string str;
    str = "Hello World!";
    // cin >> str; // does not print letters right to the space
    // getline(cin, str); // it prints all the text. if you want to not include after specific word then use this statement: getline(cin, str, '*'). * may be anything
    // cout<<str;
    // cout<<str[0]; //possible

    // for (int i = 0; i<str.length(); i++) // . is called dot operator -> object. member function
    // {cout<<str[i]<<",";}

    
    // for each loop

    // for (char ch:str){cout<<ch<<"-";}

    // Member funcitons - class: string. str-object and length-member function
    // cout<<str.length()<<endl; // 12 characters
    // cout<<str.at(3)<<endl; // str[3]
    // cout<<str.substr(6,5)<< endl;
    // cout<<str.find("ll")<<endl; // at index 2
    // cout<<endl;

    // Bitwise operator

    // Bitwise And &
    // 0 & 0 -> 0, 0 & 1 -> 0, 1 & 0 -> 0, 1 & 1 -> 1;
    // 3 & 5 -> 0011 & 0101 = 0001 = 1
    cout<<(3 & 5)<<endl;

    // Bitwise OR |
    // 0|0 -> 0, 0|1 -> 1, 1|0 -> 1, 1|1 -> 1.
    // 3 | 5 -> 0011 | 0101 = 0111 = 7
    cout<<(3|5)<<endl;
    
    // Bitwise XOR (exclusive R) ^
    // same = zero, different = one;
    // 0^0 = 1^1 = 0, 1^0 = 0^1 = 1;
    cout<<(3^5)<<endl;

    // One's complement
    // tilde (~) = Binary not operator 
    // ~ 0 -> 1, ~ 1 = 0;
    // ~ also converts leading zeros. Strange!
    // ~ 6 converts 0000 0110 to (1)111 1001. Now the memory find the two's complement of it which is again complement (1)000 0110 + 1 = (1)000 0111 = -7 
    cout<<(~0)<<endl; // every positive number should be - when operated by ~ operator

    // left shift << means to shift the bits to the left. means 0000 0011 (3) to 0000 1100 (12)
    // a << b = a * 2^b. 
    cout<<(3<<2)<<endl;
    
    // right shift >> means to shift the bits to the right. 0000 0011 (3) to 0000 0000 (0)
    // a >> b = a / 2^b.
    cout<<(3>>2)<<endl;

    return 0;
}