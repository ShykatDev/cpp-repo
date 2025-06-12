#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    char section;
    int marks;
};

int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    Student s[n]; // Declare array of objects

    for (int i = 0; i < n; i++)
    {
        cin.ignore(); // For ignore the 'enter' key press for taking the name

        cout << "Enter Name: ";
        getline(cin, s[i].name);

        cout << "Enter roll: ";
        cin >> s[i].roll;

        cout << "Enter section: ";
        cin >> s[i].section;

        cout << "Enter marks: ";
        cin >> s[i].marks;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Roll: " << s[i].roll << " - " << s[i].name << " is in section - " << s[i].section << ", with marks of " << s[i].marks << endl;
    }

    return 0;
}