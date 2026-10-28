#include <iostream>
# include <cstring>

using namespace std;

// subarray of the array is continuous part of an array. subarry = n(n+1)/2
// subsequence is non-continuous part of an array.

// e.g. arr = {1,2,3}, subarray [1,2],[2,3], subsequence is [1,3]

void printSubarray(int *arr, int n)
{
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << ",";
        }
        // {cout<<"("<<start<<","<<end<<")";}
    }
    cout << endl;
}


// A literal is the fixed, constant value that you type directly into your source code
//  int age = 25. here 25 is literal
// "code" -> string literal

int main()
{
    int subarr[] = {1, 2, 3, 4, 5};
    int size_subarr = sizeof(subarr) / sizeof(int);
    // printSubarray(subarr, size_subarr);

    char ch[] = {'c','o','d','e'};
    char ch1[] = {'c','o','d','e','\0'}; // terminated by null character.
    // cout<<ch1;

    char work[] = "code";
    // char work[5] = "code";
    cout<<work<<endl; // it saves \0 at the end
    cout<<sizeof(work)/sizeof(char)<<endl; // 5th one is \0
    cout<<strlen(work)<<endl;

    // get char as input
    char word[30];
    // cin >> word; // ignore whitespaces

    char sentence[30];
    cin.getline(sentence,30,'*'); // here sentence is the datatyep where input is stored, 30 is the max limit to be input in the sentence and * is the delimiter. It means that when user input * then don't add anything else from that.
    cout<<"Your word was "<<sentence<<" "<<endl;

    // cout<<(char) 49<<endl;
    // cout<<(int) '1';
    return 0;
}