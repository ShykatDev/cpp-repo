#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int len = str.size();

    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'E' && str[i + 1] == 'G' && str[i + 2] == 'Y' && str[i + 3] == 'P' && str[i + 4] == 'T')
        {
            str.replace(i, 5, " ");
        }
    }

    cout << str << endl;
    return 0;
}