#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
void printLL(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
Node* InsertionAtHead(Node* head, int val){
    Node* temp = new Node(val, head);
    return temp;
}
Node* convertarr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = convertarr2LL(arr);    
    head = InsertionAtHead(head, 0);
    printLL(head);
}