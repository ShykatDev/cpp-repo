#include <iostream>
using namespace std;


int main()
{
    int x;
    cin >> x;

    cout << "The ASCII character for " << x << " is: " << (char)x << endl; // Typecast from int variable to character variable

    char c;
    cin >> c;

    cout << "The ASCII value for " << c << " is: " << (int)x << endl;

    return 0;
}