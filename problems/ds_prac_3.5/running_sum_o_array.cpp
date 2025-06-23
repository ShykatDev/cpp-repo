#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> res(n);

    res[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        res[i] = res[i - 1] + v[i];
    }

    for (int i : res)
    {
        cout << i << " ";
    }

    return 0;
}