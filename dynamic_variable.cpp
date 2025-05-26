#include<iostream>
using namespace std;

int main()
{

    int x = 20; // static

    // 'new' keyword use heap memory //
    // return address from heap memory //
    int *p = new int;

    *p = 10;

    cout << "Value -> " <<  *p << endl; // Derefference
    cout << "Address -> " << p << endl;

    return 0;
}