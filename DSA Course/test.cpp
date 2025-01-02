#include <bits/stdc++.h>
using namespace std;

class Node
{
    int data;
    Node *left;
    Node *right;
};

class Node *createnode(int data)
{
    Node *n = Node();
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
};

int main()
{
    Node *head = createnode(5);

    return 0;
}