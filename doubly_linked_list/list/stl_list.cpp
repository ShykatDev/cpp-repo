#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;
    // list<int> li(10);
    list<int> li(10, 3);

    list<int> l1 = {1, 2, 3};
    vector<int> v = {9, 8, 7};
    list<int> l2(v.begin(), v.end());

    // cout << *li.begin() << endl;

    cout << l2.front() << endl;
    cout << l2.back() << endl;

    cout << *next(l2.begin(), 2) << endl;

    l2.insert(next(l2.begin(), 2), 99);
    l2.insert(next(l2.begin(), 2), l1.begin(), l1.end());

    l2.erase(next(l2.begin(), 1), next(l2.begin(), 3));

    replace(l2.begin(), l2.end(), 2, 100);

    auto it = find(l2.begin(), l2.end(), 200);

    if (it == l2.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    for (int i : l2)
    {
        cout << i << " ";
    }
    return 0;
}