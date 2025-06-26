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

    if (n == 1)
    {
        cout << "NO";
        return 0;
    }

    sort(v.begin(), v.end(), comp);

    int l = 0;
    int r = l + 1;
    bool isDup = false;

    while (r <= n)
    {
        if (v[l] == v[r])
        {
            isDup = true;
            break;
        }
        l++;
        r++;
    }

    cout << (isDup ? "YES" : "NO") << endl;

    return 0;
}