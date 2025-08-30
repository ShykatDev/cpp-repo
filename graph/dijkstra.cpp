#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> ad_list[105];
int dis[105];

void dijkstra(int src)
{
    queue<pair<int, int>> q;
    q.push({src, 0});

    dis[src] = 0;

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();

        int node = p.first;
        int n_dis = p.second;

        for (auto [c_node, c_dis] : ad_list[node])
        {
            // path_relaxation
            if (n_dis + c_dis < dis[c_node])
            {
                dis[c_node] = n_dis + c_dis;
                q.push({c_node, dis[c_node]});
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        ad_list[a].push_back({b, c});
        ad_list[b].push_back({a, c});
    }

    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }

    int src, to;
    cin >> src >> to;
    dijkstra(src);

    cout << dis[to];
    return 0;
}