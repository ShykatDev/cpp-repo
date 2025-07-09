#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {
        1,
        2,
        3,
        6,
        3,
        2,
        4,
        4,
        8,
        9,
        3,
    };

    cout << l.front() << endl;           // list head
    cout << l.back() << endl;            // list tail
    cout << *next(l.begin(), 5) << endl; // list any position

    cout << *l.begin() << endl; // head iterator
    cout << *l.end() << endl;   // tail iterator

    return 0;
}