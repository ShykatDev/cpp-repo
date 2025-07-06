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

void Print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

void Insert_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
}

void Insert_tail(Node *&head, Node *&tail, int val)
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

void Delete_head(Node *&head)
{
    Node *firstNode = head;
    head = head->next;
    delete (firstNode);
}

void Delete_tail(Node *&head, Node *&tail)
{
    Node *prevTail = head;

    while (prevTail->next != NULL)
    {
        if (prevTail->next == tail)
        {
            break;
        }

        prevTail = prevTail->next;
    }

    tail = prevTail;
    tail->next = NULL;
}

void Delete_pos(Node *&head, Node *&tail, int pos)
{
    Node *temp = head;
    int size = 0;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }

    if (pos > size - 1)
    {
        return;
    }

    if (pos == 0)
    {
        Delete_head(head);
        return;
    }
    if (pos == size - 1)
    {
        Delete_tail(head, tail);
        return;
    }

    Node *deletedPrevNode = head;
    for (int i = 0; i < pos - 1; i++)
    {
        deletedPrevNode = deletedPrevNode->next;
    }

    Node *deletedNode = deletedPrevNode->next;

    deletedPrevNode->next = deletedNode->next;

    delete (deletedNode);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;

    while (q--)
    {
        int x, val;

        cin >> x >> val;

        switch (x)
        {
        case 0:
            Insert_head(head, tail, val);
            break;
        case 1:
            Insert_tail(head, tail, val);
            break;
        case 2:
            Delete_pos(head, tail, val);
            break;
        default:
            break;
        }

        Print(head);
    }

    return 0;
}