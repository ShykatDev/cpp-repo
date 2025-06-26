#include <bits/stdc++.h>

using namespace std;

int comp(int a, int b)
{
    return a < b;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> s(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            s[i] = v[i];
        }

        sort(s.begin(), s.end(), comp);

        bool isSorted = true;

        for (int i = 0; i < n; i++)
        {
            if (v[i] != s[i])
            {
                isSorted = false;
                break;
            }
        }

        cout << (isSorted ? "YES" : "NO") << endl;
    }

    return 0;
}