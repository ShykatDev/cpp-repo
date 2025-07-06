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

int Search(Node *&head, int x)
{
    Node *temp = head;
    int index = 0;
    bool isFound = false;

    while (temp != NULL)
    {
        if (temp->val == x)
        {
            isFound = true;
            break;
        }
        else
        {
            index++;
        }
        temp = temp->next;
    }

    return isFound ? index : -1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;

        while (true)
        {
            int val;
            cin >> val;

            if (val == -1)
            {
                break;
            }

            Insert(head, tail, val);
        }

        int x;
        cin >> x;

        int idx = Search(head, x);
        cout << idx << endl;
    }

    return 0;
}