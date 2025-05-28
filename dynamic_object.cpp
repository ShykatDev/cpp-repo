#include <iostream>
using namespace std;

class Student {             // Class initialization
    public:                 // Access Modifier -> Public / Private / Protected
        char name[100];
        int roll;
        char section;
    
    Student(int roll, int section)
    {
        this->roll = roll;
        this->section = section;
    }
};

int main()
{
    Student* shykat = new Student(3, 'A');  // DataType pointer = new DataType dynamic object
    cin.getline(shykat->name, 100);

    // Show output
    cout << "The student name is " << shykat->name << " with roll " << (*shykat).roll << " and section " << shykat->section;

    return 0;
}


// Benifits:
// We can get pointer as a return value from a function