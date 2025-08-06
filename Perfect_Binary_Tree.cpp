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

    if (val == -1)
        return NULL;

    Node *root = new Node(val);

    queue<Node *> q;
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

int countNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int l = countNodes(root->left);
    int r = countNodes(root->right);

    return l + r + 1;
}

int countDepth(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }

    int l = countDepth(root->left);
    int r = countDepth(root->right);

    return max(l, r) + 1;
}

int main()
{
    Node *root = Input();
    int nodes = countNodes(root);
    int depth = countDepth(root);

    if (nodes == (pow(2, depth) - 1))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}