#include<iostream>
using namespace std;

int main()
{

    int static_array[5];
    for(int i=0; i<5; i++){
        cin >> static_array[i];
    }

    for(int i=0; i<5; i++){
        cout << static_array[i] << " | ";
    }

    // Dynamic array
    cout << endl;

    int *d_array = new int[5];
    for(int i=0; i<5; i++){
        cin >> d_array[i];
    }

    for(int i=0; i<5; i++){
        cout << *(d_array + i) << " | ";
    }

    return 0;
}