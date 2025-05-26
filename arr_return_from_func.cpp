#include<iostream>
using namespace std;

int *func(){
    int arr[5];

    for(int i=0; i<5; i++){
        cin >> arr[i];
    }

    return arr;
}

int *dfunc(){
    int *arr = new int[5];

    for(int i=0; i<5; i++){
        cin >> arr[i];
    }

    return arr;
}

int main()
{
    int *static_arr = func();
    int *dynamic_arr = dfunc();

    // It will throw error as of static memory cleared
    // for(int i=0; i<5; i++){
    //     cout << static_arr[i] << " | ";
    // }

    for(int i=0; i<5; i++){
        cout << dynamic_arr[i] << " | ";
    }

    return 0;
}