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
    Node *delnode = head;
    head = head->next;
    delete (delnode);
}

void Print(Node *&head)
{
    Node *temp = head;

    while (temp->next != NULL)
    {
        cout << temp->val << " | ";
        temp = temp->next;
    }
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