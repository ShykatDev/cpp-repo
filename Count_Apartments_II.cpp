#include <bits/stdc++.h>
using namespace std;

int n, m;
char grid[1000][1000];
bool v[1000][1000];
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m && grid[i][j] == '.';
}

int BFS(int si, int sj)
{
    int cnt = 0;
    queue<pair<int, int>> q;
    q.push({si, sj});
    v[si][sj] = true;

    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();
        cnt++;

        for (int i = 0; i < 4; i++)
        {
            int ci = x + d[i].first;
            int cj = y + d[i].second;
            if (valid(ci, cj) && !v[ci][cj])
            {
                v[ci][cj] = true;
                q.push({ci, cj});
            }
        }
    }

    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    memset(v, false, sizeof(v));
    vector<int> apartments;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.' && !v[i][j])
            {
                apartments.push_back(BFS(i, j));
            }
        }
    }

    sort(apartments.begin(), apartments.end());

    for (size_t i = 0; i < apartments.size(); i++)
    {
        cout << apartments[i];
        if (i + 1 != apartments.size())
            cout << " ";
    }
    cout << endl;

    return 0;
}
