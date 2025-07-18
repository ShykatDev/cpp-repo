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

int main()
{
    Node *head = new Node(1);
    Node *a = new Node(11);
    Node *b = new Node(111);
    Node *c = new Node(1111);

    head->next = a;
    a->next = b;
    b->next = c;

    // New pointer for itaration
    Node *temp = head;

    // Printing values
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }

    temp = head; // reset the temp position

    return 0;
}