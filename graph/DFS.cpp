#include <bits/stdc++.h>
using namespace std;

vector<int> arr[1005];
bool v[1005];

void DFS(int src)
{
    cout << src << " ";
    v[src] = true;

    for (auto child : arr[src])
    {
        if (!v[child])
            DFS(child);
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    memset(v, false, sizeof(v));
    DFS(0);

    return 0;
}