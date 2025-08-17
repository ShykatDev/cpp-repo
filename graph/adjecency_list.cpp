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
        l[b].push_back(a); // undirected graph
    }

    for (int i = 0; i < node; i++)
    {
        cout << i << " -> ";
        for (auto x : l[i])
            cout << x << " ";
        cout << endl;
    }

    return 0;
}