// -------------------------- Lesson 6 --------------------------

/*
Programming Construct:
---------------------
A programming construct is a basic building block used to write a program.

Control Structure:
-----------------
Control structures in C++ provide the mechanisms to control the flow of execution. It means it tell us to run which code first and which code after that or which code should we not run.

There are three control structures:
    * Sequence Control Structure: This is the default flow, where the statements are executed one after another.
    * Selection (conditional) Structure: These structures allow the program to make decisions and execute different blocks of code based on whether a condition is true or false. e.g. If, if-else, else-if, switch.
    * Iteration (Repitition) Structure: : These structures allow for the repeated execution of a block of code as long as a certain condition remains true. e.g. for, while, do-while.
*/

#include <iostream>
using namespace std;

int main()
{
   
    // Conditional statement : A conditional statement,also known as decision-making statements, in programming is a command that allows a program to execute different blocks of code based on whether a condition is true or false.
    

    
    // if : It executes a block of code only if a specified condition evaluates to true.
    if (3 > 2)
    {
        cout << "True" << endl;
    }

    // if-else: The if-else statement provides an alternative execution path. It guarantees that exactly one of two blocks of code will be executed. IF 'if' fails then else will be executed.
    // If-Else statement : if (condition) {code execution}
    // Else: if above conditions are false then execute this code: else {code}
    int age = 20;
    if (age = 18)
    { // This condition is true so the following code will be executed
        cout << "You can vote!" << endl;
    }
    else
    {
        cout << "You can't vote!" << endl;
    }

    // but what if we write the above code is:
    if (age = 18)
    {
        cout << "You can vote!" << endl;
    }
    if (age < 18)
    {
        cout << "You can't vote!" << endl;
    } // This code do exactly the same thing but here we use the term effeciency. In this case the compiler first check the above condition and then the second condition which require time and resources. That is not what programmer do!. The second problem is here that if the age = 18 then both code will return nothing. as both condition are false.
    // In the above code where we use else will take all the conditions besides of the if condition and make the code execute. it means that if someone is 18 years old then else condition will handle it. so therefore we use if else condition.

    // It must be noted that here we can use multiple if conditions but we can't use multiple else condition. That is not possible. e.g. if (){} else {} else {}. <- Not possible.                 Also we can't write else without if. so to write else we must need if before.

    if (5)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    } // wait! 5 doesn't mean anything why it write true. The reason is simple if always check the condition if condition is true then it will execute the code. here 5 is non-zero number so it converts this to true and then the if code execution occurs. if we write 0 instead of 5 then the else condition will be executed as 0 means false.

    // Let's do some practice
    // print the largest of two numbers
    int a = 5, b = 10;
    if (a > b)
    {
        cout << a << " is greater than " << b << endl;
    }
    else
    {
        cout << b << " is greater than " << a << endl;
    }

    // print if a number is odd or even
    int check_odd_or_even = 10;
    if (10 % 2 == 0)
    {
        cout << check_odd_or_even << " is Even number." << endl;
    }
    else
    {
        cout << check_odd_or_even << "is Odd number." << endl;
    }

    // else-if: The else-if structure is used to handle multiple, mutually exclusive conditions (only one condition can be true and its corresponding block will run). It creates a "ladder" of tests.
    // Else If -> if 'if' condition is false then else if condition is checked.
    int marks = 90;
    if (marks >= 90)
    {
        cout << "A+" << endl;
    }
    else if (marks >= 18)
    {
        cout << "A" << endl;
    }
    else
    {
        cout << "B" << endl;
    }

    // what if we write two 'if' instead of else-if:
    if (marks >= 90)
    {
        cout << "A+" << endl;
    }
    if (marks >= 80)
    {
        cout << "A" << endl;
    }
    else
    {
        cout << "B" << endl;
    }
    // What! why this code prints A. because the second condition is also true. the compiler first check the first condition which was true and then came to the second condition which was also true so it run both code of first conditon and second condition.
    // If we use else-if then the compiler first check the first 'if' condition, if the condition of 'if' is true then compiler executes its code and then leave the others. but in if cases it check each if conditions one by one.
    // so we must use else-if instead of two if. one for effeciency and one for required output.

    // Ternary Operators: (conditional operators) is a consise, single-line conditional statment in cpp (and many other langueges) that is used to evaluate a boolean expression and return one of the two values based on whether the condition is true or false.
    // syntax: variable = condition ? true : false

    // Instead of writing
    bool is_Adult;
    if (age >= 18)
    {
        is_Adult = true;
    }
    else
    {
        is_Adult = false;
    }
    cout << is_Adult << endl;

    // we can write
    is_Adult = (age >= 18) ? true : false;
    cout << is_Adult << endl; // same

    // switch condition : Use the switch statement to select one of many code blocks to be executed.
    // But why use switch instead of if-else conditions?
    // first it is prefered for readability, high performance (jump table) (bascially when you use if else condition then it first check the first condition and if it is false then move on to the next condition. what if you have 20 conditions and the 20th condition is true, the compiler will check the above 19 condition and then will come to the 20th condition to be executed. so it's in sequence (just like a linear search). But switch condition make a jumping table. compiler creates an array in the memory. This array contain the memory addresses of the code associated with each label cases.At the time of execution compiler take the value (tested by switch : switch (value)) and use it as an index for jumping table and load the store memory address (code execution occurs))

    int day = 1;

    switch (day)
    {

        // How does it works? let's expalin it.
        // First each code block (e.g.  cout<<"Monday"<<endl;) of each case is saved in the memory at specific spots (location).
        // then it makes an array (jumping table). e.g. jumping_table = [A, B, C, D]. here A is the memory address of code block of case 1.
        // when the program executes then the cpu take the value (switch (value)) e.g. 1 and directly jump to the value 1 in the jumping table. and execute the code.
        // if the value is 4 then it directly jumps to the index 4 of jumping table and execute the code. it never perform the comparison but goes to exactly position of the memory.

    case 1:
        cout << "Monday" << endl;
        break; // it is necessary to break the code otherwise the code will run till ends
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Invalid Day" << endl; // if neither case is true then compiler will run this code.
        break;                         // If you can't put break here. so it doens't create any problem.
    }

    // Now let's make a simple calculator

    int number_1, number_2;
    char arithmetic_operator;
    cout << "Enter First number : " << endl;
    cin >> number_1;
    cout << "Enter Second number : " << endl;
    cin >> number_2;
    cout << "Enter Arithmetic Operator: " << endl;
    cin >> arithmetic_operator;

    // through if else
    if (arithmetic_operator == '+')
    {
        cout << number_1 + number_2 << endl;
    }
    else if (arithmetic_operator == '-')
    {
        cout << number_1 - number_2 << endl;
    }
    else if (arithmetic_operator == '*')
    {
        cout << number_1 * number_2 << endl;
    }
    else if (arithmetic_operator == '/')
    {
        cout << number_1 / number_2 << endl;
    }
    else
    {
        cout << "Invalid Opeartor " << arithmetic_operator << endl;
    }

    // through switch
    switch (arithmetic_operator)
    {
    case '+':
        cout << number_1 + number_2 << endl;
        break;
    case '-':
        cout << number_1 - number_2 << endl;
        break;
    case '*':
        cout << number_1 * number_2 << endl;
        break;
    case '/':
        cout << number_1 / number_2 << endl;
        break;
    default:
        cout << "Invalid Opeartor " << arithmetic_operator << endl;
        break;
    }

    return 0;


}