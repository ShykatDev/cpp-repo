#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str); // Read the entire line including spaces
    cout << "String: " << str << endl;

    // stringstream

    // stringstream ss;
    // ss << str; // Insert the string into the stringstream

    stringstream ss(str); // Create a stringstream object with the input string
    string word;

    cout << "Words in the string:" << endl;

    // ss >> word; // Read the first word from the stringstream
    // cout << word << " ";

    // ss >> word; // Read the next word
    // cout << word << " ";

    while (ss >> word) // Read words until the end of the stringstream
    {
        cout << word << " "; // Output each word
    }
    cout << endl;
    ss.clear(); // Clear the stringstream state

    return 0;
}