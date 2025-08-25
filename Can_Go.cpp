#include <bits/stdc++.h>
using namespace std;

int m, n;
char grid[105][105];
bool v[105][105];

bool reach = false;

vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;

    return true;
}

void DFS(int si, int sj)
{
    if (grid[si][sj] == 'B')
    {
        reach = true;

        return;
    }
    v[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci, cj;
        ci = si + d[i].first;
        cj = sj + d[i].second;

        if (valid(ci, cj) && grid[ci][cj] != '#' && !v[ci][cj])
            DFS(ci, cj);
    }
}

int main()
{

    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    int src1 = -1, src2 = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            if (grid[i][j] == 'A')
            {
                src1 = i;
                src2 = j;
            }
    }

    memset(v, false, sizeof(v));

    if (src1 != -1 && src2 != -1)
    {
        DFS(src1, src2);
        cout << (reach ? "YES" : "NO");
    }
    else
    {
        cout << "NO";
    }
    return 0;
}