#include <bits/stdc++.h>
using namespace std;

int main()
{
    int node, edge;
    cin >> node >> edge;

    vector<int> l[node];

    while (edge--)
    {
        int a, b;
        cin >> a >> b;

        l[a].push_back(b);
        l[b].push_back(a);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;

        sort(l[x].begin(), l[x].end(), greater<int>());

        if (l[x].size() == 0)
        {
            cout << -1;
        }

        for (auto c : l[x])
            cout << c << " ";

        cout << endl;
    }

    return 0;
}