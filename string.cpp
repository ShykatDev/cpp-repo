#include<iostream>

using namespace std;

int main(){

    char s[100];
    int x;

    cin >> x;
    cin.ignore(); // It will ignore the enter key press

    // cin >> s; // This won't take space
    cin.getline(s, 100); // This will take space and enter also and work only for char
    cout << s << endl;

    string str;
    cin >> str; // This won't take space
    cout << str << endl;
    
    return 0;
}