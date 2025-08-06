#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;

    mp["tamim"] = 2; // logn
    mp["karim"] = 12;
    mp["shamim"] = 20;

    for (auto i = mp.begin(); i != mp.end(); i++) // nlogn
    {
        cout << i->first << " " << i->second << endl; // logn
    }

    cout << mp["shykat"] << endl;
    if (mp.count("puja"))
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }

    return 0;
}