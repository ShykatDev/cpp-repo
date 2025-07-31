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
        Node *nL, *nR; // nL = "new left" | nR = "new right"

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

int countLeafNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    if (root->left == NULL && root->right == NULL)
    {
        cout << "Leaf -> " << root->val << endl;
        return 1;
    }
    int l = countLeafNodes(root->left);
    int r = countLeafNodes(root->right);

    return l + r;
}

int main()
{
    Node *root = Input();
    cout << "Total Nodes -> " << countNodes(root) << endl;
    cout << countLeafNodes(root);

    return 0;
}