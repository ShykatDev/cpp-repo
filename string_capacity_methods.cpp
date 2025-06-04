#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str; // It will read until the first whitespace
    cout << "String: " << str << endl;

    // ---------------------- capacity methods ----------------------

    cout << "Size: " << str.size() << endl; // Returns the number of characters in the string
    cout << "Max Size: " << str.max_size() << endl; // Returns the maximum number of characters the string can hold
    cout << "Capacity: " << str.capacity() << endl; // Returns the number of characters that can be held in the currently allocated storage
    cout << "Is Empty: " << (str.empty() ? "Yes" : "No") << endl; // Returns true if the string is empty, false otherwise
    str.clear(); // Clears the contents of the string
    cout << "Size after clear: " << str.size() << endl; // Check size after clearing
    cout << "Is Empty after clear: " << (str.empty() ? "Yes" : "No") << endl; // Check if the string is empty after clearing
    str.resize(5); // Resizes the string to 5 characters, filling with null characters
    str.resize(10, 'a'); // Resizes the string to 10 characters, filling with 'a'
    cout << "String after resize: " << str << endl; // Display the string after resizing
    return 0;
}