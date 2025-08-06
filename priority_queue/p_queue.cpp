#include <bits/stdc++.h>
using namespace std;

int main()
{
    // priority_queue<int> pq; // max p.queue
    priority_queue<int, vector<int>, greater<int>> pq; // min p.queue
    pq.push(10);
    pq.push(5);
    pq.push(3);
    pq.push(13);

    cout << pq.top() << endl;

    pq.pop(); // 13 out

    cout << pq.top() << endl;
    return 0;
}