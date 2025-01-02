#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->back = NULL;
    }
};

Node *insertAtHead(Node *head, int data)
{
    Node *temp = head;
    Node *nodetoInsert = new Node(data);
    nodetoInsert->next = temp;
    temp->back = nodetoInsert;
    head = temp->back;
    temp = temp->back;

    return head;
}

void insertAtTail(Node *tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    temp->back = tail;
    tail = tail->next;
}

void insertAtPosition(Node *head, Node *tail, int position, int data)
{
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }
    int count = 0;
    Node *temp = head;
    while (count != position - 1)
    {
        count++;
        temp = temp->next;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
    }

    Node *newnode = new Node(data);
    temp->back->next = newnode;
    temp->back = newnode;
    newnode->back = temp->back;
    newnode->next = temp;
}

Node *remove(Node *head, int position, int data)
{
    if (head == NULL || head->next == NULL)
        return head;
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    int count = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        count++;

        if (count == position)
        {

            temp->back->next = temp->next;
            temp->next->back = temp->back;
            temp->next = NULL;
            temp->back = NULL;
            delete temp;
            break;
        }
        temp = temp->next;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    cout << "\nDoubly Linked List is : ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    cout << "\n";
    int n;
    cout << "Enter the number of elements you want to insert at head : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        head = insertAtHead(head, k);
    }
    print(head);
    cout << "\n\nChecking the Doubly LL traits ";
    cout << "\nHead : " << head->data;
    cout << "\n2nd : " << head->next->data;
    cout << "\n2nd : " << head->next->next->back->data;
    cout << "\nHead : " << head->next->back->data;
    cout << endl;

    cout << "Enter the number of elements you want to insert at tail : ";
    int n1;
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int k;
        cin >> k;
        insertAtTail(tail, k);
    }
    print(head);

    cout << "\nEnter the position and Enter the element : ";
    int pos, d;
    cin >> pos >> d;
    insertAtPosition(head, tail, pos, d);
    print(head);
    return 0;
}