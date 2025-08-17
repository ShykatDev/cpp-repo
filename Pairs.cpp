#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int i;

    Person(string name, int i)
    {
        this->name = name;
        this->i = i;
    }
};

class cmp
{
public:
    bool operator()(Person l, Person r)
    {
        if (l.name == r.name)
            return l.i < r.i;
        return l.name > r.name;
    }
};

int main()
{
    priority_queue<Person, vector<Person>, cmp> p;
    int n;
    cin >> n;

    while (n--)
    {
        string name;
        int i;

        cin >> name >> i;
        Person x(name, i);

        p.push(x);
    }

    while (!p.empty())
    {
        cout << p.top().name << " " << p.top().i << endl;
        p.pop();
    }

    return 0;
}