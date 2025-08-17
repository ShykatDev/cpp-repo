#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(Student l, Student r)
    {
        if (l.marks == r.marks)
            return l.roll > r.roll;
        else
            return l.marks < r.marks;
    }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;
    int n;
    cin >> n;
    cin.ignore();

    while (n--)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;

        Student st(name, roll, marks);
        pq.push(st);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;

        if (x == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;

            Student st(name, roll, marks);
            pq.push(st);

            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else if (x == 1)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                pq.pop();
                if (pq.empty())
                    cout << "Empty" << endl;
                else
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
        }
    }

    return 0;
}