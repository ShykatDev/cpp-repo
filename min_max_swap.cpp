#include <iostream>
#include <algorithm> // For min, max, swap function
using namespace std;


int main()
{
    int a,b;
    cin >> a >> b;

    cout << "Min is: " << min(a,b) << endl;
    cout << "Max is: " << max(a,b) << endl;
    swap(a,b);
    cout << "After swap -> a = " << a << " | b = " << b << endl;

    // For more than 2 value:
    cout << "Min of thoos values are: " << min({1, 4, 6, 8, 4}) << endl;
    cout << "Max of thoos values are: " << max({1, 4, 6, 8, 4}) << endl;
 
    return 0;
}