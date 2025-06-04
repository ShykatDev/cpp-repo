#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str; // It will read until the first whitespace
    cout << "String: " << str << endl;

    // ---------------------- iterators ----------------------
    cout << *str.begin() << endl;     // Returns an iterator to the first character of the string
    cout << *(str.end() - 1) << endl; // Returns an iterator to the end of the string (one past the last character)

    cout << "Iterating using range-based for loop:" << endl;
    for (char c : str)
    {
        cout << c << " ";
    }
    cout << endl;

    cout << "Iterating using iterators:" << endl;
    for (auto it = str.begin(); it != str.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}