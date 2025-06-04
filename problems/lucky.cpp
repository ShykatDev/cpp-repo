#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int first = n / 1000;
        int last = n % 1000;

        int fsum = 0;
        int lsum = 0;

        while (first != 0)
        {
            fsum += first % 10;
            first /= 10;
        }

        while (last != 0)
        {
            lsum += last % 10;
            last /= 10;
        }

        fsum == lsum ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}