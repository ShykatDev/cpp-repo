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

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL) // Corner case for empty linked list
    {
        head = newNode;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

bool IsCycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    bool cycle = false;

    while (fast->next != NULL && fast != NULL)
    {
        if (slow == fast)
        {
            cycle = true;
            break;
        }
        fast = fast->next->next;
        slow = slow->next;
    }

    return cycle;
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

        insert_at_tail(head, val);
    }

    bool isCycle = IsCycle(head);

    cout << (isCycle ? "YES" : "NO") << endl;

    return 0;
}