#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void Insert(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = newnode;
}

int GetMinMaxDiff(Node *head)
{
    int min = head->val, max = head->val;
    Node *temp = head;

    while (temp != NULL)
    {
        if (min > temp->val)
        {
            min = temp->val;
        }

        if (max < temp->val)
        {
            max = temp->val;
        }

        temp = temp->next;
    }

    int diff = max - min;

    return diff;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;

    while (true)
    {
        cin >> val;

        if (val == -1)
        {
            break;
        }

        Insert(head, tail, val);
    }

    int res = GetMinMaxDiff(head);
    cout << res;

    return 0;
}