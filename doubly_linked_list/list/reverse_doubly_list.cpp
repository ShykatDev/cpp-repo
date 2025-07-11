#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *prev;
    int val;
    Node *next;

    Node(int val)
    {
        this->prev = NULL;
        this->val = val;
        this->next = NULL;
    }
};

// Print Forward
void PrintForward(Node *&head)
{
    cout << "Printing forward ----------- ";
    Node *temp = head;

    cout << "| ";
    while (temp != NULL)
    {
        cout << temp->val << " | ";
        temp = temp->next;
    }

    cout << endl;
}

void Reverse(Node *start, Node *end)
{
    for (Node *i = start, *j = end; i != j && i->prev != j; i = i->next, j = j->prev)
    {
        swap(i->val, j->val);
    }
}

// Insert Tail
void InsertTail(Node *&head, Node *&tail, int val)
{
    cout << "Inserting tail";

    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    (*newNode).prev = tail;
    tail->next = newNode;

    tail = newNode;
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

        InsertTail(head, tail, val);
    }

    PrintForward(head);
    Reverse(head, tail);
    PrintForward(head);

    return 0;
}
