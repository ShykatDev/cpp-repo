#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input()
{
    int val; // take first value
    cin >> val;

    Node *root; // create node
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val); // if value is not -1, then create a valid node
    }

    queue<Node *> q; // maintain a queue for track which node currently active

    if (root != NULL)
    {

        q.push(root);
    }

    while (!q.empty())
    {
        // ---------------------------- step 1 -----------------------------
        Node *p = q.front(); // take out the first node
        q.pop();             // remove from the queue so that next node come into the front

        // ------------------------- step 2 --------------------------------
        int l, r; // take next 2 input for left and right child for "P", which was front of the queue
        cin >> l >> r;

        Node *myLeft, *myRight; // create 2 new node for child

        if (l == -1)
            myLeft = NULL; // avoid if the value is -1
        else
            myLeft = new Node(l); // with proper value

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;   // connect the left child to parent "P"
        p->right = myRight; // connect the right child to parent "P"

        // ---------------------------------- step 3 ----------------------------------
        // Because now my queue is empty,
        // push into the queue if it not NULL,
        // so next time it will work for the next node, which will come into front of the queue

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}

void levelOrder(Node *root)
{
    if (root == NULL)
    {
        cout << "No tree";
        return;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

int main()
{
    Node *root = input();
    levelOrder(root);
    return 0;
}