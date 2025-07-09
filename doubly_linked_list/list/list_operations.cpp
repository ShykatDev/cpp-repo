#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {1, 2, 10, 3, 4, 5, 6, 10, 10};

    // l.remove(10);

    l.sort(greater<int>());
    l.unique(); // must be sorted list
    l.reverse();

    for (auto i : l)
    {
        cout << i << " ";
    }

    return 0;
}