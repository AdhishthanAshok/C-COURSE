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

void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    // insert at start
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    Node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // insert at end
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
    }

    Node *nodetoinsert = new Node(data);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

Node *remove(Node *head, int position)
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
    Node *prev = temp;

    while (temp != NULL)
    {
        count++;
        if (count == position)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node *removeEl(Node *head, int value)
{
    if (head == NULL || head->next == NULL)
        return head;
    if (head->data == value)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node *temp = head;
    Node *prev = temp;

    while (temp != NULL)
    {
        if (temp->data == value)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node *convert2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *curr = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        curr->next = temp;
        curr = temp;
    }
    return head;
}

void print(Node *&head)
{
    Node *temp = head;
    cout << "Elements are : ";
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
    // cout << node1->data << endl;
    // cout << node1->next << endl;
    // insertAtHead(node1, 20);
    // cout << node1->data << " " << node1->next->data << endl;
    // insertAtHead(node1, 30);
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
    print(head);
    cout << endl;

    cout << "Enter element and its position to insert : ";
    int position, k;
    cin >> k >> position;
    insertAtPosition(head, tail, position, k);
    print(head);

    cout << "\nEnter position to delete : ";
    int del;
    cin >> del;
    head = remove(head, del);
    print(head);
    cout << "\n";

    cout << "\nEnter Element to delete : ";
    int del_val;
    cin >> del_val;
    head = removeEl(head, del_val);
    print(head);

    vector<int> arr = {1, 2, 3, 4, 5};
    cout << "\nArray is : ";
    for (auto i : arr)
    {
        cout << i << " ";
    }
    Node *node2 = new Node(0);
    Node *head2 = node2;
    cout << "\nArray to linked list : ";
    head2 = convert2LL(arr);
    print(head2);
    cout << "\nHead : " << head->data;
    cout << "\nHead2 : " << head2->data;
    return 0;
}