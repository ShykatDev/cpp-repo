#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);

    string word;
    bool isFind = false;

    while (ss >> word)
    {
        if (word == "Jessica")
        {
            isFind = true;
            break;
        }
    }

    isFind ? cout << "YES" : cout << "NO";

    return 0;
}