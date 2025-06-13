#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math;
    int eng;
};

bool cmp(Student l, Student r)
{
    if (l.eng > r.eng)
    {
        return true;
    }
    else if (l.eng < r.eng)
    {
        return false;
    }
    else if (l.math > r.math)
    {
        return true;
    }
    else if (l.math < r.math)
    {
        return false;
    }
    else
    {
        return l.id < r.id;
    }
}

int main()
{
    int n;
    cin >> n;
    Student std[n];

    for (int i = 0; i < n; i++)
    {
        cin >> std[i].nm >> std[i].cls >> std[i].s >> std[i].id >> std[i].math >> std[i].eng;
    }

    sort(std, std + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << std[i].nm << " " << std[i].cls << " " << std[i].s << " " << std[i].id << " " << std[i].math << " " << std[i].eng << endl;
    }

    return 0;
}