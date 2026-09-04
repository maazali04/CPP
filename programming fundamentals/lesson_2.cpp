/* -------------------------- Lesson 1 --------------------------
/*
What is C++?
------------
    * Cpp is the cross platform language that can be used to create high performance language.
    * C++ was developed by Bjarne Stroustrup (pronouce: Bi-aane stroustrup), as an extension to the C language.
    * C++ gives programmers a high level of control over system resources and memory.
    * The language was updated 5 major times in 2011, 2014, 2017, 2020, and 2023 to C++11, C++14, C++17, C++20, and C++23.

Why Use C++
-----------
    * C++ can be found in today's operating systems, Graphical User Interfaces, and embedded systems.
    * C++ is an object-oriented programming language which gives a clear structure to programs and allows code to be reused, lowering development costs.
    * C++ is portable and can be used to develop applications that can be adapted to multiple platforms.
    * As C++ is close to C, C# and Java, it makes it easy for programmers to switch to C++ or vice versa.


    * The main difference between C and C++ is that C++ supports classes and objects, while C does not.

Environment setup for cpp:
-------------------------
    * We need two things: First is editor where we can write code, and the second is compiler which translates the source code into machine language code.
    * For writing code we will use IDE (Integrated Development Environment). and for compiler we will use mingw.


How to write my first cpp code:
------------------------------
    * First create a new file in vscode.
    * then name is what you want and at the last .cpp. e.g. main.cpp.
    * write your code and run it.

*/

// syntax refers to the set of rules that define how code must be written to be considered valid and understandable by the compiler. It dictates the structure, grammar, and proper arrangement of keywords, symbols, and expression. explain this example int x = 5;
// A computer program is a list of "instructions" to be "executed" by a computer.

// In a programming language, these programming instructions are called statements.
// e.g. cout<<"Hello World!"; <- This is statement
// The statements runs one by one from top to bottom. statement mostly ends with ;
/*
Difference between code and comment:
------------------------------------
code: The actual instructions a programmer writes for the computer to execute. It must strictly follow C++ syntax rules (for cpp). This is the part that the compiler reads, translates, and turns into an executable program. If the syntax is wrong, the code will not compile.
comment: Human-readable text inside the source file that is completely ignored by the compiler. It is not executed.
Purpose: 1. Explain complex logic. 2. Document code functionality. 3. Temporarily disable code (commenting out). 4. Self-reminder for future work (TODOs).

comments types:
---------------
    * single line comment: //
    * multi line comment: /* and ends with * /
    * Inline (Code-Adjacent) Comments : A single-line comment placed after a statement on the same line.
    * comment code: we can comment code as well
    * comment out code: similarly we can comment out the code.
    * Self-Documentation 
*/

// this is single line comment

/*
I have wrote this line,
to demonstrate you that this is a multiline comment
*/


#include <iostream> // This is inline comment.

// code can be commented too. just place // before the code and it will be commented. If you want to comment out the code then remove the // and it will comment out it and will be used as a actual code.
// using namespace std; -> comment code

