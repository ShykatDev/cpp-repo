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

void SameOrNot(Node *&head1, Node *&head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;

    if (temp1 == NULL && temp2 == NULL)
    {
        cout << "YES" << endl;
        return;
    }

    int size1 = 0, size2 = 0;
    while (temp1 != NULL)
    {
        size1++;
        temp1 = temp1->next;
    }

    while (temp2 != NULL)
    {
        size2++;
        temp2 = temp2->next;
    }

    if (size1 != size2)
    {
        cout << "NO" << endl;
        return;
    }

    temp1 = head1;
    temp2 = head2;
    while (temp1 != NULL)
    {
        if (temp1->val != temp2->val)
        {
            cout << "NO" << endl;
            return;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    cout << "YES" << endl;
}

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *tail1 = NULL;
    Node *tail2 = NULL;

    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
        {
            break;
        }

        Insert(head1, tail1, val);
    }

    while (true)
    {
        int val;
        cin >> val;

        if (val == -1)
        {
            break;
        }

        Insert(head2, tail2, val);
    }

    SameOrNot(head1, head2);
    return 0;
}