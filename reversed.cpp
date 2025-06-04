#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10];
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Read the entire line including spaces

    for (int i = 0; i < 10; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i]; // Read 10 integers from input
    }

    cout << "Original Array: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " "; // Print each integer followed by a space
    }
    cout << endl;
    cout << "Original String: " << str << endl;

    cout << "-------------------------" << endl;

    // reversed array
    cout << "Reversed Array: ";
    reverse(arr, arr + 10); // Reverse the array
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " "; // Print each integer followed by a space
    }

    cout << endl;

    reverse(str.begin(), str.end());            // Reverse the string
    cout << "Reversed String: " << str << endl; // Print the reversed string

    return 0;
}