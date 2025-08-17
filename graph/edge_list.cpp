#include <bits/stdc++.h>
using namespace std;

int main()
{
    int node, edge;
    cin >> node >> edge;

    vector<pair<int, int>> edgeList;

    while (edge--)
    {
        int a, b;
        cin >> a >> b;

        edgeList.push_back({a, b});
    }
    cout << "----------------" << endl;
    for (auto p : edgeList)
        cout << p.first << " " << p.second << endl;

    return 0;
}