#include <iostream>
#include <string>
using namespace std;

class Student{
    public: 
        char name[100];
        int roll;
        double gpa;

    // Student(int r, double g) // This is a constructor  with different param name
    // {
    //     roll = r;
    //     gpa = g;
    // }

    Student (int roll, double gpa) // constructor with this
    {
        this->roll = roll; // Method 1
        (*this).gpa = gpa; // Method 2
    }
};

int main()
{
    Student s1(3, 4.34);
    cin.getline(s1.name, 100);

    cout << "The student name is " << s1.name << " with roll " << s1.roll << " and GPA " << s1.gpa;


    return 0;
}


// Constructor ---------------
// Properties of a constructor:
//     1. No Return type
//     2. It should in between a class
//     3. Should same name as the class name
//     4. It will call automatically when an object created 

// this keyword -------------------
//     1. this will refer the pointer of created object, so we can't access properties with dot(.),
//     then we need to access with arrow(->)

//     2. for accessing with dot(.), we mus derefference the this variable