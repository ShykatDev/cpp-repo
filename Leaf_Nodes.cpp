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

void Print(Node *root)
{
    vector<int> leaves;
    if (!root)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *cur = q.front();
        q.pop();

        if (!cur->left && !cur->right)
        {
            leaves.push_back(cur->val);
        }

        if (cur->left)
            q.push(cur->left);
        if (cur->right)
            q.push(cur->right);
    }

    sort(leaves.begin(), leaves.end(), greater<int>());

    for (int v : leaves)
    {
        cout << v << " ";
    }
}

int main()
{
    Node *root = Input();
    Print(root);

    return 0;
}