#include <bits/stdc++.h>
using namespace std;

int n, m;
char grid[1000][1000];
bool v[1000][1000];

vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;

    return true;
}

void DFS(int si, int sj)
{
    v[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if (valid(ci, cj) && grid[ci][cj] == '.' && !v[ci][cj])
        {
            DFS(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    memset(v, false, sizeof(v));

    int apartments = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.' && !v[i][j])
            {
                DFS(i, j);
                apartments++;
            }
        }
    }

    cout << apartments << endl;
    return 0;
}
