#include <iostream> // header file
#include <iomanip>
#include <string>
using namespace std;

// static local variable
void static_local_variable()
{
    static int static_local_value = 10;
    int normal_local_value = 5;
    static_local_value++;
    normal_local_value++;
    cout << "This static int value is " << static_local_value << endl;
    cout << "This normal int value is " << normal_local_value << endl;
}
// A variable is a specific storage location in the computer's memory that holds a value.
//  A variable always has a name (its identifier), a type (int, char, etc.), and a value (10).
// An identifier is a name given to something in a program. It's the label you use to refer to things like: varibale (x), function (sum) and others.

// int x = 10; here x is the identifer as well as variable because it stores value in the memory.
// all varibles are identifiers but not all identifiers are variable (functions name is identifier but not variable)

int main()
{

    cout << 3 + 3 << endl;          // mathematical calculation
    cout << "Hello World!" << "\n"; // cout is an object used together with the insertion operator (<<) to output text.
    // \n is used as "Hi\n"; or "HI"<<\n; endl is also used but \n is common

    // what is \n. it is escape character
    // Escape sequences are special way to write characters that can't be typed directly. It starts with a backslash (\) followed by a letter or symbol. escape sequence can be used for :

    // 1. Special Character Escapes (Standard)
    cout << "New\nLine" << endl;        // new line
    cout << "tab\tspace" << endl;       // tab ; tab spaces depends on software or setting. usually 4 to 8
    cout << "tab12345space" << endl;    // 5 space in vscode confirm.
    cout << "carriage\rreturn" << endl; // carriage return : moves cursor to the begining of the current line. (overwrting existing text)
    cout << "Alert sound \a" << endl;   // produce beep sound or visual alert (red dot in some IDEs.)
    cout << "Back\bSpace" << endl;      // delete the previous letter
    cout << "Form \f feed" << endl;     // moves the cursor to the starting of the next page. my ide represent it as ♀.
    cout << "\v";                       // used for vertical tab but IDE gives me ♂

    // 2. Punctuation and Reserved Character Escapes
    // as some character normally terminates or cause conflict with string or character.

    cout << "Double slash \\" << endl;   // used to indicate double splash
    cout << "Single Quote : \'" << endl; // used to print '
    cout << "Double Quote : \"" << endl; // used to print "
    // A trigraph was a sequence of three characters, starting with two question marks (??), that the compiler would automatically replace with a single, different character. ??= is used for pound. they were used to print these symbols as they were not present in the keyboard at that times.
    cout << "Question marks \?" << endl; // now it is not used as triagraph is removed. this was made to print ? instead to use it as triagraph.

    // 3. Numeric and Unicode Escapes
    cout << "\101" << endl;                    // use 3 octal numbers having range from 0 to 7. // octal digits
    cout << "\x41" << endl;                    // uses x followed by hexadecimal digits (0-9 and a-f). // hexadecimal digits
    cout << "\u0041" << endl;                  // uses u followed by four hexadecimal digits. // short unicode
    cout << "Long unicode \U00000041" << endl; // uses U followed by 8 hexadecimal digits. // long unicode.

    /*
    variable is divided into two categories (by datatype (what they store) and by scope (where it can be accessed))
    On the basis of datatype: primitive, derivaties and user-defined.
    on the basis of socpe and life-time. local (built and destroyed within the same funciton), global (build outside the main fucntion and destroyed when the program terminates), static local variable (built within function but terminates when the program ends. not access outside the function), members variables (declared inside the class, access to the object of the class only. created with object creation and destroyed with object destruction)
    */

    // static local variable
    static_local_variable(); // the value of static increases one by one.
    static_local_variable(); // the normal int value is not changed.
    static_local_variable();
    static_local_variable();

    // if you don't want to change the varible then use the word const (constatn variables)
    const int const_variable = 1; // it must be assigned with the value you can't declare it first and then assign the value.
    int normal_variable = 5;
    // const_variable = 4; // read-only variable can't be reassigned
    normal_variable = 6; // no erros.

    // cin is pre-defined variable followed by extraction operator >>
    // difference between float and double one is range that double store much larger value and other is precision just take this examples
    // Creating a double type variable
    double a = 3.912348239293;

    // Creating a float type variable
    float b = 3.912348239293;

    // Printing the two variables

    cout << "Double Type Number  = " << setprecision(13) << a << endl;
    cout << "Float Type Number   = " << b << endl; // last 5 which is wrong.

    // auto : automatically detect the datatype
    auto x = 5; // we must assign the value, the value may change later but not the datatype.
    cout << x << endl;

    // compound assignment opeartor += or *= etc.

    // The + operator can be used between strings to add them together to make a new string. This is called concatenation:
    // Numbers are added. Strings are concatenated.
    int dummy_num = 9;
    string firstname = "John ", lastname = "Doe";
    cout << firstname + lastname << endl; // concatenation
    // cout<<firstname + dummy_num<<endl; // throws an error if you add string with int
    // string functions are member functions
    cout << firstname.append(lastname) << endl;

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << txt.length() << " or " << txt.size() << endl;

    // access string by typing [] at last of identifier
    cout << txt[0] << endl;                // first character
    cout << txt[txt.length() - 1] << endl; // last character

    string hello_txt = "Jello";
    // change value of J to H
    hello_txt[0] = 'H';
    // cout<<hello_txt[0] = 'H'; // this gives an error: here cout<<hello_txt[0] prints and then assign operator comes the compiler wonder what to do what this operator.
    cout << hello_txt << endl;       // Hello
    cout << hello_txt.at(0) << endl; // also access the string at position n (0,1,2,...)

    // cout<<"Enter your name: \n";
    // string your_name;
    // cin >> your_name; // cin consider the whitespace is terminating character. so instead of john doe it types john.
    // how to get john doe completly, we use
    // getline(cin, your_name); // it takes complete user input not just one word.
    // cout<<your_name<<endl;

    string txt_string = "Hello";
    char txt_char[] = "Hello"; // character array - often called C-style string. some people use this to use the function of c library which is not found in cpp.
    // cout<< txt_string + " " + txt_char;

    return 0;
}