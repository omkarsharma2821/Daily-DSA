#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
};
int main() {
    vector<int> arr = {2,3,5,4,7,5};
    Node* y = new Node(arr[5], nullptr);
    cout<<y->data<<endl;
    cout<<y->next;
}