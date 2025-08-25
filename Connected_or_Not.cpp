#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    int matrix[n][n];
    memset(matrix, 0, sizeof(matrix));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i == j)
                matrix[i][j] = 1;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        matrix[a][b] = 1;
    }

    int q;
    cin >> q;

    while (q--)
    {
        int x, y;
        cin >> x >> y;

        cout << (matrix[x][y] == 1 ? "YES" : "NO") << endl;
    }

    return 0;
}
