#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
void printLL(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *InsertionAtHead(Node *head, int val)
{
    Node *temp = new Node(val, head);
    return temp;
}
Node *convertarr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}
Node *InsertionAtTail(Node *head, int val)
{
    if (head == nullptr)
        return new Node(val);
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(val);
    temp->next = newNode;
    return head;
}
Node *InserteleAtKthNode(Node *head, int ele, int k)
{
    if (head == nullptr)
        return new Node(ele);
    if (k == 1)
    {
        Node *temp = new Node(ele);
        return temp;
    }
    int count = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        count++;
        if (count == k - 1)
        {
            Node *newnode = new Node(ele, head);
            newnode->next = temp->next;
            temp->next = newnode;
        }
        temp = temp->next;
    }
    return head;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = convertarr2LL(arr);
    head = InsertionAtHead(head, 0);
    printLL(head);
    head = InsertionAtTail(head, 6);
    printLL(head);
    head = InserteleAtKthNode(head, 9, 3);
    printLL(head);
}