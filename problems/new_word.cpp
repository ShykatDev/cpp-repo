#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int ecount = 0;
    int gcount = 0;
    int ycount = 0;
    int pcount = 0;
    int tcount = 0;

    for (char c : str)
    {
        if (c == 'e' || c == 'E')
            ecount++;
        else if (c == 'g' || c == 'G')
            gcount++;
        else if (c == 'y' || c == 'Y')
            ycount++;
        else if (c == 'p' || c == 'P')
            pcount++;
        else if (c == 't' || c == 'T')
            tcount++;
    }

    int min_pattern = min({ecount, gcount, ycount, pcount, tcount});

    cout << min_pattern << endl;

    return 0;
}