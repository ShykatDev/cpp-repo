#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    stringstream s(str);
    string word;

    s >> word;
    reverse(word.begin(), word.end());
    cout << word;

    while (s >> word)
    {
        reverse(word.begin(), word.end());
        cout << " " << word;
    }

    return 0;
}