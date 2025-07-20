#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;
    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        l.insert(next(l.begin(), x), v);
    }

    for (int i : l)
    {
        cout << i << " ";
    }

    return 0;
}