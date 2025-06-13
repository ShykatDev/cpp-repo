#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int n;
    cin >> n;
    Student std[n];

    for (int i = 0; i < n; i++)
    {
        cin >> std[i].nm >> std[i].cls >> std[i].s >> std[i].id;
    }

    int l = 0, r = n - 1;
    while (l < r)
    {
        char temp;
        temp = std[l].s;
        std[l].s = std[r].s;
        std[r].s = temp;

        l++;
        r--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << std[i].nm << " " << std[i].cls << " " << std[i].s << " " << std[i].id << endl;
    }

    return 0;
}