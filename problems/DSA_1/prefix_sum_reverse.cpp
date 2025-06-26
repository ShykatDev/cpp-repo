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
    vector<long long> ps(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ps[0] = v[0];

    for (int i = 1; i < n; i++)
    {
        ps[i] = ps[i - 1] + v[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << ps[i] << " ";
    }

    return 0;
}