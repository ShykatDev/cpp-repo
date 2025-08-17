#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    queue<string> patients;

    while (t--)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "ARRIVE")
        {
            string name;
            cin >> name;

            patients.push(name);
        }
        else if (cmd == "SERVE")
        {
            if (patients.empty())
                cout << "No patients" << endl;
            else
                patients.pop();
        }
        else if (cmd == "FIRST")
        {
            if (patients.empty())
                cout << "No patients" << endl;
            else
                cout << patients.front() << endl;
        }
        else if (cmd == "LAST")
        {
            if (patients.empty())
                cout << "No patients" << endl;
            else
                cout << patients.back() << endl;
        }
        else if (cmd == "COUNT")
        {
            cout << patients.size() << endl;
        }
        else if (cmd == "SHOW")
        {
            if (patients.empty())
                cout << "No patients" << endl;
            else
            {
                queue<string> q = patients;
                while (!q.empty())
                {
                    cout << q.front() << " ";
                    q.pop();
                }
                cout << endl;
            }
        }
    }

    return 0;
}