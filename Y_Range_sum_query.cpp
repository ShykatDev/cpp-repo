#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    // Make a new prefix-sum array
    vector<long long> pre(n + 1);
    pre[0] = arr[0];
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + arr[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        long long sum = 0; // long long because value may 10^9

        if (l == 1)
        {
            sum = pre[r]; // formula
        }
        else
        {
            sum = pre[r] - pre[l - 1]; // formula
        }

        cout << sum << endl;
    }
    return 0;
}