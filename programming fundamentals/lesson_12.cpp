#include <iostream>
using namespace std;

/*
We have learnt that there are different datatypes:
    * 1. primitive (Fundamental) datatype :
    -------------------------------------- These are the basic types built into the language that cannot be broken down further. (e.g., int, char, float, double, bool, void). The other which was short, long, long long, signed, unsigned -> modifiers.
    * 2. Derived Data Types (Built-in Structures):
    ---------------------------------------------- Derived types are formed by combining or extending the fundamental types using built-in mechanisms. (e.g. pointers, function, reference variable, and arrays)
    * 3. 3. User-Defined Data Types (Custom Structures):
    --------------------------------------------------- User-defined types allow the programmer to create complex, custom data structures that group different data types together under a single name. (e.g. Class, Structure, Unions, Enumerations.)
*/

void arr_func(int arr[])
{
    arr[0] = 1000;
}

void arr_func2(int *ptr)
{
    ptr[0] = 1000;
}

// This function cause an error! Just dry run it you will understand.
void invalid_print_array(int arr[])
{
    int n = sizeof(arr) / sizeof(int); // Here sizeof(arr) will give you 8 which is the size of pointer not the whole array and sizeof(int) equals to 4 so 8/4 = 2. is there are two numbers in the array? No, the answer will be wrong.
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

// Now let's write the exact function for printing out all the elements of the array.
void valid_print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

// Linear Search function

int LinearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int BinarySearch(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{

    // let's talk about arrays
    // A data type defines the kind of data a variable can hold (like an integer or a string), while a data structure is a way of organizing and storing multiple data types to perform operations on them efficiently

    /*
    Array:
    ------ An array is a fundamental data structure in C++ (and most programming languages) used to store a fixed-size, sequential collection of elements of the same data type.

    Key Characteristics:
    --------------------
    * Homogeneous Elements: All elements of the array must be of same datatype.
    * The size of array must be fixed at the time of declaration and can't be change later.
    * Array element stored in memory right next to each other (contigiously). This is crucial becasue it allows for very fast, direct access to any element using its index.
    * The starting point of index is 0 and the last element is in at index (n-1), where n is the total size of an array.
*/

    // let's make an array
    // First you must specify the datatype. then identifier, and then number of elements within the square bracket. square number's elements indicates that how many elements can an array contain.

    // let's make an array without initialization.
    int array_1[50]; // datatype, identifiers [number of elements]
    // Here what happened? Basically, memory gave space to 50 integers in the memory one after the other, we didn't assign any value to the array so those 50 spaces contain garbage value. It may be 0 , it may be negative number or may be positives, we have no idea of it.
    // we haven't assigned some values to it but still want to access it. let's check out.
    cout << array_1[0] << endl;
    cout << array_1[20] << endl;
    cout << array_1[30] << endl; // remember it's just garbage value.
    cout << array_1[40] << endl;
    cout << array_1[55] << endl; // why it didn't cause an error? c++ doesn't do boundry-checking as it takes time. the compiler thinks that programmer knows that what he is doing. so it goes and get the location of that memory address, even though the memory address of it was of different varibles or functions.

    // let's make an array with some first value being initialized!
    int array_2[50] = {11, 22, 33};  // first 3 value initialized and the rest is automatically assigned to 0. we are now 100% sure that other value must be zero which we didn't initialized.
    cout << array_2[1] << endl;      // it prints 22, not 11, as we know that array index starts from 0 not from 1.
    cout << array_2[2] << endl;      // it prints 33.
    cout << array_2[3] << endl;      // 0 as expected.
    cout << array_2[20] << endl;     // 0 as expected.
    cout << sizeof(array_2) << endl; // 200 bytes. means that 200/4 = 50 int.

    // let's make an array without specifying its size (number of elements) but with some values.
    int array_3[] = {10, 20, 30}; // compiler automatically specify its size based on values.
    cout << array_3[0] << endl;   // prints 10
    cout << array_3[1] << endl;   // prints 20
    cout << array_3[2] << endl;   // prints 30

    // let's print out all the elements of the array
    cout << "Printing all the elements of an array" << endl;
    int output_array[50]; // check all the elements of the array which is garbage value.
    // int output_array[50] = {1,2,3}; // 1,2,3 and then 0. you can confirm
    for (int i = 0; i < (sizeof(output_array) / sizeof(int)); i++)
    {
        cout << i << " " << output_array[i] << endl;
    }

    // let's input some values to array
    int input_array[5];

    for (int i = 0; i < (sizeof(input_array) / sizeof(int)); i++)
    {
        cin >> input_array[i];
    }
    for (int i = 0; i < (sizeof(input_array) / sizeof(int)); i++)
    {
        cout << input_array[i] << " ";
    }
    cout << endl;

    // We just check out that we can assign the values to an array when we didn't initialize before.
    // but what about if we initialize it and then want to change it.
    int original_array[5] = {1, 2, 3, 4, 5};
    original_array[0] = 6;
    original_array[1] = 7;
    original_array[2] = 8;
    for (int i = 0; i < 5; i++)
    {
        cout << original_array[i] << endl; // we can change it.
    }

    // Find the largest in array
    cout << "Find the largest number in the array" << endl;
    int array0[4] = {3, 8, 0, 4};
    int max_number = array0[0];
    for (int i = 0; i < (sizeof(array0) / sizeof(int)); i++)
    {
        if (max_number < array0[i])
        {
            max_number = array0[i];
        }
    }
    cout << max_number << endl;

    // array name can be converted to a pointer.
    int pointer_Array[] = {1, 2, 3, 4, 5};
    cout << pointer_Array << endl;  // it prints the memory address of array. but wait which address as this array contain 5 int so it takes 20 bytes so which byte it represents?
    cout << *pointer_Array << endl; // we got 1! So it means that pointer_array represent memory address of pointer_array[0] which is one. interesting!

    // Array are passed by reference.
    arr_func(pointer_Array);          // passing array name (pointer_Array) is equal to passing the pointer. as array name acts as pointer by itself.
    cout << pointer_Array[0] << endl; // its value changed! so it pass by reference not by value.

    // calling the functions
    // valid
    cout << " Valid print array funciton" << endl;
    int size_of_array = sizeof(pointer_Array) / sizeof(int);
    valid_print_array(pointer_Array, size_of_array);

    // Invalid
    cout << " Invalid print array funciton" << endl;
    // invalid_print_array(pointer_Array); // give us warning and wrong output.

    // The process of searching a specific key in the array is called linear search.
    // first we will compare our target element (key) in the array one by one. if we find the our key matches with the specific element of the array the search stop and we will get the first result. If there are other element similar to key but linear search will always get the first one and then stop. what if the key didn't exist in the array, so in that case it will return -1, which means that key is not found.

    int check_array[] = {2, 4, 6, 8, 10, 12, 10};
    int check_array_size = sizeof(check_array) / sizeof(int);
    int key = 10;
    cout << LinearSearch(check_array, check_array_size, key) << endl;

    // Time complexity is a concept used to describe how the running time of an algorithm changes as the size of the input data increases. Basically, it doesn't measure time in seconds or minutes as different computer perform same task in different time. Instead it measures the number of basic operations (like comparison, addition, and assignment, etc.)
    // Time complexity is denoted by big O.
    // So in short time complexity finds the relation between input size and number of operations.

    // just take an example of above LinearSearch. In that each thing is almost constant except iteration. if we give                                                                       input -> 5: operation -> 5 iteration + constant operation.                                      input -> 100: operation -> 100 iteration + constant operation.                                  So here input size is directly related to the number of opertion. it means that by increasing input size by 2, the operation also increase by 2.
    // The above LinearSearch algorithms has linear time complexity so therefore we called it linear search. O(N)

    // Reverse an array
    // with extra space
    int reverse_array_01[] = {1, 2, 3, 4, 5};
    int size_of_reverse_array_01 = sizeof(reverse_array_01) / sizeof(int);
    int _reverse_array_01[size_of_reverse_array_01];

    for (int i = 0; i < size_of_reverse_array_01; i++)
    {
        int j = size_of_reverse_array_01 - i - 1;
        _reverse_array_01[i] = reverse_array_01[j];
    }
    cout << _reverse_array_01 << endl;

    for (int i = 0; i < size_of_reverse_array_01; i++)
    {
        cout << _reverse_array_01[i] << endl;
    }

    // Space Complexity: is the relation between input size and the extra space.
    // Here Time complexity is O(n).
    //

    // Reverse an array without using extra space (2 pointer approach)
    int start = 0, end = size_of_reverse_array_01 - 1;

    while (start < end)
    {
        // int temp = reverse_array_01[start];
        // reverse_array_01[start] = reverse_array_01[end];
        // reverse_array_01[end] = temp;
        swap(start, end);
        start++;
        end--;
    }

    for (int i = 0; i < size_of_reverse_array_01; i++)
    {
        cout << reverse_array_01[i] << ",";
    }
    cout << endl
         << endl;

    // Binary search is a highly efficient search algorithm used to find a target value within a sorted array or list.
    int binary_array[] = {2, 4, 6, 8, 10};
    int binary_array_1[] = {2, 4, 6, 8, 10, 12};
    int size_binary_array = sizeof(binary_array) / sizeof(int);
    int size_binary_array_1 = sizeof(binary_array_1) / sizeof(int);
    cout << "Binary Searching ..." << endl;
    cout << BinarySearch(binary_array, size_binary_array, 6) << endl;  // index 2
    cout << BinarySearch(binary_array, size_binary_array, 8) << endl;  // index 3
    cout << BinarySearch(binary_array, size_binary_array, 4) << endl;  // index 1
    cout << BinarySearch(binary_array, size_binary_array, 99) << endl; // index -1

    cout << BinarySearch(binary_array_1, size_binary_array_1, 8);

    return 0;
}
