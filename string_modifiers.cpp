#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str); // Read the entire line including spaces
    cout << "String: " << str << endl;

    str = "Hello, World!"; // Assign a new value to the string with = sign;
    cout << "Modified String: " << str << endl;

    string str2 = "Goodbye, World!"; // Assign a new value to another string
    cout << "Another String: " << str2 << endl;

    str.assign(str2); // Assign the value of str to str2
    cout << "str after assignment: " << str2 << endl;

    str.append(" How are you?"); // Append a string to str
    cout << "str after append: " << str << endl;

    str.push_back('!'); // Add a character to the end of str
    cout << "str after push_back: " << str << endl;

    str.pop_back(); // Remove the last character from str
    cout << "str after pop_back: " << str << endl;

    str += " Have a nice day!"; // Concatenate another string to str
    cout << "str after concatenation: " << str << endl;

    str.erase(5, 7); // Erase 7 characters starting from index 5
    cout << "str after erase: " << str << endl;

    str.insert(5, "beautiful "); // Insert a string at index 5
    cout << "str after insert: " << str << endl;

    str.replace(5, 10, "wonderful"); // Replace 10 characters starting from index 5 with "wonderful"
    cout << "str after replace: " << str << endl;

    str.swap(str2); // Swap the contents of str and str2
    cout << "str after swap with str2: " << str << endl;

    return 0;
}