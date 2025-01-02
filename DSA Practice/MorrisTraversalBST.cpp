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

vector<int> getInorder(node *root)
{
    vector<int> inorder;
    node *cur = root;
    while (cur != NULL)
    {
        if (cur->left == NULL)
        {
            inorder.push_back(cur->data);
            cur = cur->right;
        }
        else
        {
            node *prev = cur->left;
            while (prev->right && prev->right != cur)
            {
                prev = prev->right;
            }
            if (prev->right == NULL)
            {
                prev->right = cur;
                cur = cur->left;
            }
            else
            {
                prev->right = NULL;
                inorder.push_back(cur->data);
                cur = cur->right;
            }
        }
    }
    return inorder;
}

vector<int> getPreorder(node *root)
{
    vector<int> Preorder;
    node *cur = root;
    while (cur != NULL)
    {
        if (cur->left == NULL)
        {
            Preorder.push_back(cur->data);
            cur = cur->right;
        }
        else
        {
            node *prev = cur->left;
            while (prev->right && prev->right != cur)
            {
                prev = prev->right;
            }
            if (prev->right == NULL)
            {
                prev->right = cur;
                Preorder.push_back(cur->data);
                cur = cur->left;
            }
            else
            {
                prev->right = NULL;
                cur = cur->right;
            }
        }
    }
    return Preorder;
}

vector<int> getPostorder(node *root)
{
    vector<int> Postorder;
    node *cur = root;
    while (cur != NULL)
    {
        if (cur->right == NULL)
        {
            Postorder.push_back(cur->data);
            cur = cur->left;
        }
        else
        {
            node *prev = cur->right;
            while (prev->left && prev->left != cur)
            {
                prev = prev->left;
            }
            if (prev->left == NULL)
            {
                prev->left = cur;
                Postorder.push_back(cur->data);
                cur = cur->right;
            }
            else
            {
                prev->left = NULL;
                cur = cur->left;
            }
        }
    }
    return Postorder;
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
    vector<int> inorder;
    inorder = getInorder(p);

    cout << "The Inorder Traversal is: ";
    for (int i = 0; i < inorder.size(); i++)
    {
        cout << inorder[i] << " ";
    }

    vector<int> Preorder;
    Preorder = getPreorder(p);

    cout << "\nThe Preorder Traversal is: ";
    for (int i = 0; i < Preorder.size(); i++)
    {
        cout << Preorder[i] << " ";
    }

    vector<int> Postorder;
    Postorder = getPostorder(p);

    cout << "\nThe Postorder Traversal is: ";
    for (int i = Postorder.size()-1 ; i >= 0; i--)
    {
        cout << Postorder[i] << " ";
    }
    return 0;
}