#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ---------------------- capacity methods ----------------------

    string str;
    cin >> str; // It will read until the first whitespace
    cout << "String: " << str << endl;

    cout << str[2] << endl;    // Access the first character of the string
    cout << str.at(1) << endl; // Access the first character using at() method

    cout << str.front() << endl; // Access the first character using front() method
    cout << str.back() << endl;  // Access the last character using back() method

    return 0;
}