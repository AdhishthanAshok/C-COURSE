#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{

    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}

void insertAtPosition(Node* &head , int position , int data ){
    
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;
    insertAtHead(node1, 20);
    // cout << node1->data << " " << node1->next->data << endl;
    insertAtHead(node1, 30);
    // cout << node1->data << " " << node1->next->data << " " << node1->next->next->data;
    Node *head = node1;
    Node *tail = node1;
    int n;

    // INSERT NUMBER OF ELEMENTS IN HEAD

    cout << "Enter the number of elements you want to enter in LL : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        insertAtHead(head, k);
    }
    cout << "LL : ";
    print(head);
    cout << endl;

    int n1;

    // INSERT NUMBER OF ELEMENTS at Tail

    cout << "Enter the number of elements you want to enter in LL at tail : ";
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int k;
        cin >> k;
        insertAtTail(tail, k);
    }
    cout << "LL : ";
    print(head);
    cout << endl;
    return 0;
}