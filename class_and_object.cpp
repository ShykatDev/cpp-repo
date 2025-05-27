#include <iostream>
using namespace std;

class Student {             // Class initialization
    public:                 // Access Modifier -> Public / Private / Protected
        char name[100];
        int roll;
        char section;
};

int main()
{
    Student shykat; // Object define
    
    //  Take input
    cin.getline(shykat.name, 100) >> shykat.roll >> shykat.section;

    // Show output
    cout << "The student name is " << shykat.name << " with roll " << shykat.roll << " and section " << shykat.section;

    return 0;
}