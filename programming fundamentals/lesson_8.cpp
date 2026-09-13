#include <iostream>
using namespace std;

int main()
{
    // Loops are control structures that allow a block of code to be executed repeatedly based on a specific condition.

    // Types of loops: 3 types

    // for: When we know the  exact number of times you want the loop to iterate.
    // For loops : for (initialization, condition, updation) { code execution }
    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    } // How it works
    // first it initialize i as 1. then it check the condition whether the condition is less than 5 or not. yes it is. so it runs the code, print i, then it increase i with 1 (i++) then again check the condition is i (2) < 5 yes, then again code and then again increment. the value becomes 3 then 4, and at last 5. so condition satisfied here. it will print 5 and then will break the code automatically.

    // TIP:  In programming, a "dry run" of code refers to the manual, step-by-step simulation of a program's execution without actually running it on a computer. This process involves mentally (or with pen and paper) tracing the flow of logic, tracking the values of variables, and predicting the output or behavior of the code.

    // How to make for loop as infinite
    // for (int i = 1; i>0; i++) {cout<<i<<endl;} // here the condition is always true so the loop will run for infinite, which is quite dangerous.

    // Iteration means to repeat a process, task, or set of instructions multiple times. (run the loop)

    // while: It executes a block of code as long as its given condition remains true.
    // While : i = 0 (initialization) while (condition){cod execution, i++ (updation)}
    int i = 0;
    while (i < 6)
    {
        cout << i << endl;
        i++;
    }

    // let's do some practice
    i = 0;
    while (i < 4)
    {
        cout << "****" << endl;
        i++;
    }

    // do-while: The do-while loop is a variation where the loop body executes at least once before the condition is checked.
    // do - while loop : do {code execution} while (condition);
    // It will run once irrespective of the condition.

    i = 0;
    do
    {
        cout << i << endl;
        i++;
    } while (i < 5);

    // let's check the difference between while and do-while loop
    while (i > 10)
    {
        cout << "while loop";
    }
    do
    {
        cout << "Do-while loop";
    } while (i > 10); // it executes once even the condition is false.

    // Loop Control Keyword: These keywords provide precise control over how the loop executes, allowing you to deviate from the normal flow.

    // break: The break keyword immediately terminates the entire loop (or switch statement)
    cout << "Break" << endl;
    i = 0;
    while (i < 5)
    {
        if (i == 3)
        {
            break;
        }
        cout << i << endl;
        i++;
    }

    // write a program that take multiple input from the user and if the input is multiple of 10 then break the loop
    int user_input = 1;
    while (user_input % 10 != 0)
    {
        cout << "Enter a number: ";
        cin >> user_input;
    }

    // continue : The continue keyword immediately skips the remainder of the current iteration and proceeds to the next cycle.
    for (int i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            continue;
        }
        cout << i << endl;
    }

    // prime number : excep 1 and itself, other numbers can't divide it completely
    int check_prime_number = 10;
    bool is_prime = true;

    for (int i = 2; i <= check_prime_number - 1; i++)
    {
        if (check_prime_number % i == 0)
        {
            is_prime = false;
            break;
        }
    }
    if (is_prime)
    {
        cout << check_prime_number << " is prime number" << endl;
    }
    else
    {
        cout << check_prime_number << " is not prime.";
    }

    // nested if else: if (){ if (){}} <- nested if-else
    // similarly nested loops for (){ for () {}}

    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    int n = 5;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "Inverted Star Pattern" << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i + 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "Half paramid pattern" << endl;

    n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (i); j++)
        {
            cout << j;
        }
        cout << endl;
    }

    cout << "Hollow Square pattern" << endl;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || i == n)
            {
                cout << " *";
            }
            else
            {
                if (j == 0 || j == n)
                {
                    cout << " *";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }

    cout << "Inverted and rotated half pyramid pattern" << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << " *";
        }
        cout << endl;
    }

    return 0;
}
