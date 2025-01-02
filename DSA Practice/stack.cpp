#include <iostream>
using namespace std;

struct stackNode
{
    int data;
    stackNode *next;
    stackNode(int d)
    {
        data = d;
        next = NULL;
    }
};
struct Stack
{
    stackNode *top;
    int size;
    Stack()
    {
        top = NULL;
        size = 0;
    }
    void push(int x)
    {
        stackNode *element = new stackNode(x);
        element->next = top;
        top = element;
        size++;
        cout << "Element Added : " << x << "\n";
    }
    int pop()
    {
        if (top == NULL)
            return -1;
        int topdata = top->data;
        stackNode *temp = top;
        top = top->next;
        delete top;
        size--;
        return topdata;
    }
    int stackSize()
    {
        return size;
    }
    void print()
    {
        stackNode *temp = top;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Stack st;
    st.push(11);
    st.print();
    st.push(12);
    st.print();
    st.push(13);
    st.print();
    cout << "Element Deleted : " << st.pop() << " \n";
    st.print();
    cout << "Stack size: " << st.stackSize() << "\n";
    return 0;
}