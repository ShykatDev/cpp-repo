#include <iostream>
using namespace std;

int main()
{
    char x;
    cin >> x;
    
    int val = (int)x;

    if(val >= 48 && val <= 57){
        cout << "IS DIGIT" << endl;
    }else{
        cout << "ALPHA" << endl;
         if(val >= 65 && val <= 90){
            cout << "IS CAPITAL" << endl;
         }else{
            cout << "IS SMALL" << endl;
         }
    }
    return 0;
}