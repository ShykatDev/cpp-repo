#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        int id;
        char name[100];
        char section;
        int total_marks;

    Student(int id, char section, int total_marks)
    {
        this->id = id;
        this->section = section;
        this->total_marks = total_marks;
    }
};

Student getInfo(){
    int id, total_marks;
    char section, std_name[100];

    cin >> id >> std_name >> section >> total_marks;
    Student x(id, section, total_marks);
    strcpy(x.name, std_name);
    return x;
}

void printInfo(Student std){
    cout << std.id << " " << std.name << " " << std.section << " " << std.total_marks << endl;
}

int main()
{
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        Student std1 = getInfo();
        Student std2 = getInfo();
        Student std3 = getInfo();
        
        int topMark = max({std1.total_marks, std2.total_marks, std3.total_marks});

        if(std1.total_marks == topMark){
            printInfo(std1);
        }else if(std2.total_marks == topMark){
            printInfo(std2);
        }else{
            printInfo(std3);
        }
    }

    return 0;
}



// Problem Statement

// A student has several pieces of information, such as a unique ID, name, section, and total marks. You will be given the information of three students. Your task is to determine and print the details of the student who achieved the highest total marks. In the case of a tie (i.e., two or more students having the same total marks), print the information of the student with the smaller ID.

// Input Format

// First line will contain T, the number of test cases.
// For each test case there will be 3 lines. Each line will contain - ID, Name, Section, Total Marks of a student. The name will contain lowercase English alphabets only.
// Constraints

// 1 <= T <= 1000
// 1 <= ID <= 3
// 1 <= |Name| <= 100
// 'A' <= Section <= 'Z'
// 0 <= Total Marks <= 100
// Output Format

// Ouptut the information as asked in the question.
// Sample Input 0

// 3
// 1 sakib A 50
// 2 rakib D 96
// 3 akib C 90
// 1 sakib A 50
// 2 rakib D 96
// 3 akib C 96
// 1 sakib A 50
// 2 rakib D 50
// 3 akib C 40
// Sample Output 0

// 2 rakib D 96
// 2 rakib D 96
// 1 sakib A 50