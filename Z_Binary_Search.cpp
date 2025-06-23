#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    while (q--)
    {
        int x;
        cin >> x;

        int start = 0;
        int end = n - 1;
        int mid = start + end / 2;

        bool found = false;

        while (x == v[mid])
        {
            if (x > v[mid])
            {
                start = v[mid];
            }
            else if (x < v[mid])
            {
                end = v[mid];
            }

            mid = start + end / 2;
        }

        if (x == v[mid])
        {
            cout << "found";
        }
        else
        {
            cout << "No";
        }
    }
    return 0;
}