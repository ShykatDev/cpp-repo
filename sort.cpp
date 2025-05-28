#include <bits/stdc++.h> // this header file includes all nessesary headers
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a, a+n); // assending sort(first, last)
    sort(a, a+n, greater<int>()); // decending


    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }

    return 0;
}