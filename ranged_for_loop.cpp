#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Read the entire line including spaces
    cout << "Original String: " << str << endl;

    for (char c : str)
    {
        cout << c << endl; // Print each character followed by a space
    }
    return 0;
}