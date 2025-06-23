#include <bits/stdc++.h>
using namespace std;

int comp(int a, int b)
{
    return a < b;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), comp);

    int q;
    cin >> q;

    while (q--)
    {
        int l = 0;
        int r = v.size() - 1;
        int x;
        cin >> x;
        bool isFind = false;

        while (l <= r)
        {
            int m = l + (r - l) / 2;

            if (x == v[m])
            {
                isFind = true;
                break;
            }
            else
            {
                (x < v[m]) ? r = m - 1 : l = m + 1;
            }
        }

        cout << (isFind ? "YES" : "NO") << endl;
    }

    return 0;
}