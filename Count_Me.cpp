#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);

        string word;

        map<string, int> mp;

        int mx = 0;
        string mxName = "";
        while (ss >> word)
        {
            mp[word]++;
            int count = mp[word];
            if (count > mx)
            {
                mx = count;
                mxName = word;
            }
        }
        cout << mxName << " " << mx << endl;
    }
    return 0;
}