#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> l;

    void push(int x)
    {
        l.push_back(x);
    }

    void pop()
    {
        l.pop_back();
    }

    int top()
    {
        return l.back();
    }

    bool empty()
    {
        return l.empty();
    }
};

class myQueue
{
public:
    list<int> l;

    void push(int x)
    {
        l.push_back(x);
    }

    void pop()
    {
        l.pop_front();
    }

    int top()
    {
        return l.front();
    }

    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    myStack st;
    myQueue q;

    int n, m;
    cin >> n >> m;

    if (n != m)
    {
        cout << "NO";
        return 0;
    }

    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (m--)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    bool flag = true;

    while (!st.empty() && !q.empty())
    {
        if (st.top() != q.top())
        {
            flag = false;
            break;
        }

        st.pop();
        q.pop();
    }

    cout << (flag ? "YES" : "NO");

    return 0;
}