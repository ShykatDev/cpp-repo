#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector initialization
    vector<int> w;        // type 1
    vector<int> v(10);    // type 2
    vector<int> x(10, 1); // type 3
    vector<int> y(x);     // type 4

    int a[5] = {1, 2, 3, 4, 5};
    vector<int> z(a, a + 5); // type 5

    for (int i = 0; i <= z.size(); i++)
    {
        cout << z[i] << " ";
    }
    return 0;
}