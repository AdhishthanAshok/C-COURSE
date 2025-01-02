#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *right;
    node *left;

    node(int data)
    {
        this->data = data;
        right = NULL;
        left = NULL;
    }
};

void insertnode(node *root, int key)
{
    node *temp = NULL;
    while (root != NULL)
    {
        temp = root;
        if (root == NULL)
        {
            return;
        }
        else if (root->data == key)
        {
            cout << "\nElement is already present there. "
                 << root->data;
            return;
        }
        else if (root->data > key)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }

    node *newnode = new node(key);
    if (temp->data > key)
    {
        temp->left = newnode;
    }
    else
    {
        temp->right = newnode;
    }
}

void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}
void preorder(node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

int getheight(node *root)
{
    node *temp = root;
    if (temp == NULL)
        return 0;
    else
    {
        int lheight = getheight(temp->left);
        int rheight = getheight(temp->right);

        if (lheight > rheight)
        {
            lheight++;
            return lheight;
        }
        else
        {
            rheight++;
            return rheight;
        }
    }
    return 0;
}

int main()
{
    node *p = new node(10);
    node *p1 = new node(6);
    node *p2 = new node(16);
    node *p3 = new node(2);
    node *p4 = new node(8);
    node *p5 = new node(14);
    node *p6 = new node(18);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    p2->right = p6;

    inorder(p);

    cout << "\n";
    insertnode(p, 7);
    cout << "\n";

    cout << "\nInsert 4 values  : ";
    for (int i = 0; i < 4; i++)
    {
        int k;
        cin >> k;
        insertnode(p, k);
    }

    cout << "\n Inorder Tree is : ";
    inorder(p);
    cout << "\n Preorder Tree is : ";
    preorder(p);

    cout << "\nHeight of the tree is : " << getheight(p);
    return 0;
}