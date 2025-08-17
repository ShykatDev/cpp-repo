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

void getChildrenFrequency(Node *root, map<int, int> &mp)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
    {
        mp[root->val]++;
    }
    getChildrenFrequency(root->left, mp);
    getChildrenFrequency(root->right, mp);
}

int main()
{
    Node *root = Input();

    map<int, int> mp;

    getChildrenFrequency(root, mp);

    int mx = 0;
    int mxVal = 0;
    for (auto i : mp)
    {
        if (mx < i.second)
        {
            mx = i.second;
            mxVal = i.first;
        }
    }

    cout << mxVal;

    return 0;
}