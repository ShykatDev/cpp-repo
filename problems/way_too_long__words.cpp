#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        int len = str.size();

        if (len > 10)
        {
            int count = len - 2;

            cout << str[0] << count << str[len - 1] << endl;
        }
        else
        {
            cout << str << endl;
        }
    }
    return 0;
}