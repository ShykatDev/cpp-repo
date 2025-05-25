#include <iostream>
#include <iomanip> // need for setprecission function
using namespace std;


int main()
{
    double x = 19.765341;

    cout << "Without setprecission -> " << x << endl; // This will show max 4 positions after point.

    // This will show any number after point given in setprecision function
    cout << "With setprecission -> " << fixed << setprecision(2) << x << endl; 
    
    return 0;
}