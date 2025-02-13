#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *createNode(int data)
{
    Node *node;
    node->data = data;
    node->left = NULL;
    node->left = NULL;

    return node;
};

int main()
{

    Node *newNode = createNode(5);
    Node *l = createNode(6);
    Node *r = createNode(7);

    newNode->left = l;
    newNode->right = r;

    cout << newNode->data;
    cout << "\n";
    cout << newNode->left->data;
    cout << "\n";
    cout << newNode->right->data;
    return 0;
}