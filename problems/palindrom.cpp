#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int l = 0;
    int r = str.size() - 1;

    while (l < r)
    {
        if (str[l] != str[r])
        {
            cout << "NO" << endl;
            return 0;
        }
        l++;
        r--;
    }
    cout << "YES" << endl;
    return 0;
}