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

// Print Backward
void PrintBackward(Node *&tail)
{
    cout << "Printing backward ----------- ";

    Node *temp = tail;

    cout << "| ";
    while (temp != NULL)
    {
        cout << temp->val << " | ";
        temp = temp->prev;
    }

    cout << endl;
}

// Insert Head
void InsertHead(Node *&head, int val)
{
    cout << "Inserting head";

    Node *newNode = new Node(val);

    newNode->next = head;
    head->prev = newNode;

    head = head->prev;
    cout << endl;
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

// Insert Any Position
void InsertPos(Node *&head, int pos, int val)
{
    cout << "Inserting any position";

    Node *newNode = new Node(val);
    Node *temp = head;

    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next->prev = newNode;

    newNode->prev = temp;
    temp->next = newNode;

    cout << endl;
}

// Delete Head
void DeleteHead(Node *&head, Node *&tail)
{
    Node *delNode = head;
    head = head->next;
    delete delNode;

    if (head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
}

// Delete Tail
void DeleteTail(Node *&head, Node *&tail)
{
    Node *delNode = tail;
    tail = tail->prev;

    delete delNode;

    if (tail == NULL)
    {
        head = NULL;
        return;
    }

    tail->next = NULL;
}

// Delete Any Position
void DeletePos(Node *&head, int pos)
{
    Node *delNode = head;
    for (int i = 0; i < pos - 1; i++)
    {
        delNode = delNode->next;
    }

    delNode->next->prev = delNode->prev;
    delNode->prev->next = delNode->next;

    delete delNode;
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

    // PrintForward(head);

    InsertHead(head, 100);
    PrintForward(head);

    InsertTail(head, tail, 200);
    PrintForward(head);

    InsertPos(head, 1, 99);
    PrintForward(head);

    DeleteHead(head, tail);
    DeleteTail(head, tail);
    PrintForward(head);

    DeletePos(head, 3);
    PrintForward(head);

    return 0;
}
