#include <bits/stdc++.h>
using namespace std;

bool v[1005];
vector<int> arr[1005];

void BFS(int src)
{
    queue<int> q;
    q.push(src);

    v[src] = true;

    while (!q.empty())
    {
        int p = q.front();
        q.pop();

        cout << p << " ";

        for (auto child : arr[p])
        {
            if (!v[child])
            {
                q.push(child);
                v[child] = true;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    arr->resize(n);

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    memset(v, false, sizeof(v));

    BFS(0);

    return 0;
}