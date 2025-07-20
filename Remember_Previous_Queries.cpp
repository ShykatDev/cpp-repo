#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;
    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;

        if (x == 0 || x == 1)
        {
            int v;
            cin >> v;
            (x == 0) ? l.push_front(v) : l.push_back(v);
        }
        else if (x == 2)
        {
            int idx;
            cin >> idx;
            if (idx < l.size())
            {
                l.erase(next(l.begin(), idx));
            }
        }

        cout << "L -> ";
        for (int i : l)
        {
            cout << i << " ";
        }
        cout << endl;

        cout << "R -> ";
        l.reverse();
        for (int i : l)
        {
            cout << i << " ";
        }
        cout << endl;
        l.reverse();
    }

    return 0;
}
