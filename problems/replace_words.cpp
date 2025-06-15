#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string s, x;
        cin >> s >> x;
        int slen = s.size();
        int xlen = x.size();
        bool findFirst = false;
        bool isMatch = false;
        for (int i = 0; i < slen; i++)
        {
            for (int j = 0; j < xlen; j++)
            {
                if (s[i + j] == x[j])
                {
                    findFirst = true;
                }
                else
                {
                    findFirst = false;
                    break;
                }
                isMatch = true;
            }
            if (findFirst && isMatch)
            {
                s.replace(i, xlen, "#");
            }
        }

        cout << s << endl;
    }
    return 0;
}