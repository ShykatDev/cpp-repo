#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str("Hello, World!");
    cout << "Original string: " << str << endl;

    string str2(str, 5);
    cout << "Substring from index 5: " << str2 << endl;

    string str3("Goodbye, World!", 7);
    cout << "Substring to index 7: " << str3 << endl;

    string str4(5, 'A');
    cout << "String of 5 'A's: " << str4 << endl;
    return 0;
}