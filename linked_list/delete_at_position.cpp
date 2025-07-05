#include <bits/stdc++.h>
using namespace std;

struct Node
{
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
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    // tail = tail->next;
    tail = newNode;
}

void Delete(Node *&head)
{
    int pos;
    cin >> pos;

    Node *temp = head;

    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }

    Node *delNode = temp->next;
    temp->next = temp->next->next;

    delete delNode;
}

void Print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
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

    Delete(head);
    Print(head);

    return 0;
}