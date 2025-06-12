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

    int min_mark = INT_MAX;

    Student std;
    std.marks = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        min_mark = min(min_mark, s[i].marks);

        if (std.marks < s[i].marks)
        {
            std = s[i];
        }
    }

    cout << "Min marks - " << min_mark << endl;

    cout << "Roll: " << std.roll << " - " << std.name << " is in section - " << std.section << ", with marks of " << std.marks << endl;

    return 0;
}