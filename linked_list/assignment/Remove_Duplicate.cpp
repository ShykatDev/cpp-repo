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

void RemoveDups(Node *&head1, Node *&head2, Node *&tail2)
{
    Node *temp1 = head1;

    while (temp1 != NULL)
    {
        bool isFound = false;
        Node *temp2 = head2;

        while (temp2 != NULL)
        {
            if (temp2->val == temp1->val)
            {
                isFound = true;
                break;
            }
            temp2 = temp2->next;
        }

        if (!isFound)
        {
            Insert(head2, tail2, temp1->val);
        }

        temp1 = temp1->next;
    }
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    Node *head2 = NULL;
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

    RemoveDups(head1, head2, tail2);
    Print(head2);

    return 0;
}