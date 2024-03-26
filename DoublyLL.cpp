#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

public:
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
Node *convertArr2DLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
void printDLL(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node *DeleteheadDLL(Node *head)
{
    if (head == nullptr || head->next == nullptr)
        return NULL;
    Node *temp = head;
    head = head->next;
    head->back = nullptr;
    temp->next = nullptr;
    delete temp;
    return head;
}
Node *DeleteTailinDLL(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return NULL;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    Node *newtail = temp->back;
    newtail->next = nullptr;
    temp->back = nullptr;
    delete temp;
    return head;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 88, 47};
    Node *head = convertArr2DLL(arr);
    cout <<"DLL Traversal : " <<endl;
    printDLL(head);
    cout<<endl;
    head = DeleteheadDLL(head);
    cout <<"Delete head in DLL : " <<endl;
    printDLL(head);
    cout << endl;
    head = DeleteTailinDLL(head);
    cout <<"Delete tail in DLL : " <<endl;
    printDLL(head);
    return 0;
}