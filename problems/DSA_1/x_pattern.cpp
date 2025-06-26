#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<char>> v(n, vector<char>(n, ' '));
    if (n == 1)
    {
        cout << "X";
        return 0;
    }
    int m = n / 2;

    for (int i = 0; i < n; i++)
    {
        v[m][m] = 'X';
        v[i][i] = '\\';
        v[i][n - i - 1] = '/';
    }

    for (auto i : v)
    {
        for (auto j : i)
        {
            cout << j << "";
        }
        cout << endl;
    }

    return 0;
}