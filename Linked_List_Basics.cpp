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
Node* ConvertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        // mover = temp;
        mover = mover->next;
    }
    return head;
}
void LLTraversal(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int LengthOfLL(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp ){
        count++;
        temp = temp->next;
    }
    return count;
}
string SearchInLL(Node* head, int val){
    Node* temp = head;
    while(temp != nullptr){
        if(temp->data == val) return "Present";
        temp = temp->next;
    }
    return "Not Present";
}
Node* DeleteHead(Node* head){
    if(head == nullptr) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
Node* DeleteTail(Node* head){
    if(head == nullptr || head->next == nullptr) return NULL;
    Node* temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;   
    return head;
}
Node* RemoveKthNode(Node* head, int k){
    if(head == nullptr) return head;
    if(k == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int count = 0;
    Node* prev = nullptr;
    Node* temp = head;
    while(temp != nullptr){
        if(count == k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
Node* RemoveElement(Node* head, int val){
    if(head == nullptr) return nullptr;
    if(head->data == val){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node* prev = nullptr;
    Node* temp = head;
    while(temp != nullptr){
        if(temp->data == val){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
}
int main() {
    int val;
    vector<int> arr = {2,9,5,4,7,5};
    Node* head = ConvertArr2LL(arr);
    cout<<endl;
    cout<<"Head of the List/array is: "<<head->data<<endl;
    cout<<"Traversal of the List is: ";
    LLTraversal(head);
    cout<<endl;
    cout<<"Length is: "<<LengthOfLL(head)<<endl;
    cout<<"Enter the value to search: ";
    cin>>val;
    cout<<"Searching for "<<val<<" : "<<SearchInLL(head, val)<<endl;
    cout<<"Linked List after deleting the head: "<<DeleteHead(head)->data<<endl;
    cout<<"Remove the kth node: "<<RemoveKthNode(head, 3)->data<<endl;
}