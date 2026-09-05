// -------------------------- Lesson 2 --------------------------
// writing your first program.

// In C++, "boilerplate code" refers to sections of code that are repeatedly written in various parts of a program or across different projects with minimal or no modifications.

#include <iostream> 

// 1. The #include Directive
// It is preprocessor directive:
// If someone has already written a program in cpp, and we just want to use that code in our own code without writting again, we use preprocessor directive.
// directive means official instruction. and preprocessive means before processing. Here processing is compilation. so overall it means that instruction given to the code before the code compilation

// It literally copies and pastes the entire text content of the specified file (in this case, iostream) directly into your source code file.

//Angle Brackets (< >): Used for standard library headers (like iostream). This tells the compiler to look for the file in the standard system directories.
// Quotation Marks (" "): Used for user-defined headers (files you create yourself, like "myheader.h"). This tells the compiler to look in the current project directory first.


// 2. The <iostream> Header
// A standard library header file. The name stands for Input/Output Stream.
// It contains the code necessary to perform basic input and output operations, specifically by defining the stream objects you use all the time.

// Key stream objects it provides.
// std::cout (Console Output): The object used to display data (text, numbers, etc.) to the standard output device (usually the screen or console).
// std::cin (Console Input): The object used to read data from the standard input device (usually the keyboard).
// std::endl: A manipulator used to insert a new line and flush the output buffer.


#include "your_code.cpp"
#include "your_friend_code.cpp"



using namespace std;
// A namespace in C++ is a declarative region that provides a scope for the identifiers (names of variables, functions, classes, etc.) inside it. Its primary purpose is to prevent naming conflicts when combining code from different libraries or different parts of a large project.

// imagine you and your friend create two different code files. 
// Both have function namely "Is_programming_fun", yours one return true where his one return false.
// so when someone use both codes then his compiler will get confuse to get which function.
// To solve this problem we use namespace where we declare our function. 
using namespace your; // your_friend.
// There are three ways to access element of the namespace

// 1. Full Qualification: safest and fastes method. we use :: scope resolution operator. 
// cout<<your_friend::is_programming_fun()<<endl;

// 2. using Declaration (Selective Access) 
// This method allows you to bring a single element from the namespace into the current scope (e.g., inside a function or class).
// using your_friend::is_programming_fun;

// 3. using Directive (Avoid for General Use) 
// This method brings ALL elements from a namespace into the current scope, allowing you to use them without any prefix.
// using namespace your;

int main(){
    // The main() Function
    // This is the mandatory entry point of every C++ executable program.
    // Execution always begins here.
    
    // 'int': The return type. It means the main function will send an integer value back to the operating system.
    // 'main': The fixed name recognized by the system as the start of the program.
    // '()': The parameters (arguments) passed to the function, usually empty for a simple program.
    
    cout<<"Hello World!"<<endl;
    // cout<<is_programming_fun(); // cause confusion when you use it without using namespace
    // cout<<is_programming_fun()<<endl; // now it works.
    // cout<<your_friend::is_programming_fun()<<endl;
    return 0;
    // This statement signals the successful termination of the program.

    // 'return': Exits the main function immediately.
    // '0': The exit status. 0 conventionally means the program ran successfully without errors.
    // Any non-zero value (like 1) indicates an error or failure to the operating system.
}