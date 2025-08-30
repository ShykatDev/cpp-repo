#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<pair<int, int>> ad_list[n];

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        ad_list[a].push_back({b, c});
        ad_list[b].push_back({a, c});
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " -> ";

        for (auto [child, weight] : ad_list[i])
            cout << child << " -- " << weight << ", ";
        cout << endl;
    }
    return 0;
}