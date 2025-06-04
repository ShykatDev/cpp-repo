#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str; // It will read until the first whitespace
    cout << "Original String: " << str << endl;

    // sorting the string -> sort(start, end)
    sort(str.begin(), str.end());
    cout << "Sorted string: " << str << endl;
    return 0;
}