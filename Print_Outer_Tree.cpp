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

Node *Input()
{
    int val;
    cin >> val;
    Node *root;

    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;

    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *nL, *nR;

        if (l == -1)
            nL = NULL;
        else
            nL = new Node(l);

        if (r == -1)
            nR = NULL;
        else
            nR = new Node(r);

        p->left = nL;
        p->right = nR;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}

void PrintLeft(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    (root->left) ? PrintLeft(root->left) : PrintLeft(root->right);

    cout << root->val << " ";
}

void PrintRight(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->val << " ";
    (root->right) ? PrintRight(root->right) : PrintRight(root->left);
}

int main()
{
    Node *root = Input();

    if (root->left)
        PrintLeft(root->left);

    cout << root->val << " ";

    if (root->right)
        PrintRight(root->right);

    return 0;
}