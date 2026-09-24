#include <iostream>
using namespace std;

int main()
{

    // [Naive Approach] By Finding the Remainder - O(1) Time and O(1) Space

    // int n;
    // cout << "Enter the  numbers:";
    // cin >> n;

    // if (n % 2 == 0)
    // {
    //     cout << "even number" << endl;
    // }

    // else
    // {
    //     cout << "oddNumber" << endl;
    // }

    // [Efficient Approach] Using Bitwise AND Operator - O(1) Time and O(1) Space
    //  The last bit of all odd numbers is always 1, while for even numbers it’s 0. So, when performing bitwise AND operation with 1, odd numbers give 1, and even numbers give 0.
// Note: Bitwise operators are extremely fast and efficient because they operate directly at the binary level, making them significantly faster than arithmetic or logical operations.

 int n = 14;
    if ( isEven(n) == true)
        cout << "true";
    else
        cout << "false";

    return 0;
}