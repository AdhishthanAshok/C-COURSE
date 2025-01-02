#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    int height;

    node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
        height = 1;
    }
};

int getHeight(node *root)
{
    if (root == NULL)
        return 0;

    return root->height;
}

int maximum(int a, int b)
{
    return max(a, b);
}

int getBalancedFactor(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return getHeight(root->left) - getHeight(root->right);
}

node *rightRotate(node *p)
{
    node *x = p->left;
    node *t2 = x->right;

    x->right = p;
    p->left = t2;

    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;
    p->height = max(getHeight(p->right), getHeight(p->left)) + 1;

    return x;
}

node *leftRotate(node *p)
{
    node *x = p->right;
    node *t2 = x->left;

    x->left = p;
    p->right = t2;

    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;
    p->height = max(getHeight(p->right), getHeight(p->left)) + 1;

    return x;
}

node *insert(node *root, int data)
{
    if (root == NULL)
    {
        return new node(data);
    }
    else if (root->data > data)
    {
        root->left = insert(root->left, data);
    }
    else if (root->data < data)
    {
        root->right = insert(root->right, data);
    }

    root->height = 1 + max(getHeight(root->left), getHeight(root->right));

    int bf = getBalancedFactor(root);

    // LL Case
    if (bf > 1 && root->left->data > data)
    {
        return rightRotate(root);
    }

    // RR Case
    if (bf < -1 && root->right->data < data)
    {
        return leftRotate(root);
    }

    // LR Case
    if (bf > 1 && root->left->data < data)
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    // RL Case
    if (bf < -1 && root->right->data > data)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

void preOrder(node *root)
{
    if (root)
    {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}
void inOrder(node *root)
{
    if (root)
    {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}

int main()
{
    node *root = new node(0);
    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 3);

    preOrder(root);
    printf("\n");
    inOrder(root);

    return 0;
}
