#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str; // Read the entire string

        string firstTime = "";
        int balloons = 0;

        for (char ch : str)
        {
            balloons++;
            if (firstTime.find(ch) == string::npos)
            {
                balloons++; // First time seeing this character
                firstTime += ch;
            }
        }

        cout << balloons << endl;
    }

    return 0;
}
