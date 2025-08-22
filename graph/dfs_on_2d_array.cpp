#include <bits/stdc++.h>
using namespace std;

int m, n;
char grid[105][105];
bool v[105][105];

vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;

    return true;
}

void DFS(int si, int sj)
{
    cout << si << " " << sj << endl;
    v[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci, cj;
        ci = si + d[i].first;
        cj = sj + d[i].second;

        if (valid(ci, cj) && !v[ci][cj])
            DFS(ci, cj);
    }
}

int main()
{

    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    int si, sj;
    cin >> si >> sj;

    memset(v, false, sizeof(v));

    cout << "------------------" << endl;
    DFS(si, sj);
    return 0;
}