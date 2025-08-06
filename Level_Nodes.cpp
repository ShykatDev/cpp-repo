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

int main()
{
    Node *root = Input();
    int x;
    cin >> x;

    if (root == NULL)
    {
        return 0;
    }

    queue<pair<Node *, int>> q;
    bool flag = false;

    if (root)
        q.push({root, 0});

    while (!q.empty())
    {
        pair<Node *, int> parent = q.front();
        q.pop();

        Node *n = parent.first;
        int lvl = parent.second;

        if (lvl == x)
        {
            cout << n->val << " ";
            flag = true;
        }

        if (n->left)
            q.push({n->left, lvl + 1});
        if (n->right)
            q.push({n->right, lvl + 1});
    }

    if (!flag)
        cout << "Invalid";

    return 0;
}