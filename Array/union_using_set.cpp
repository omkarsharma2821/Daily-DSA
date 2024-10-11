#include<bits/stdc++.h>
using namespace std;


vector<int> FindUnionUsingSet(vector<int> arr1, vector<int>arr2){
    set<int> st;
    vector<int>unionArr;
    for(int i = 0; i<arr1.size(); i++){
        st.insert(arr1[i]);
    }
    for(int i = 0; i<arr2.size(); i++){
        st.insert(arr2[i]);
    }

    for(auto it : st){
        unionArr.push_back(it);
    }
    return unionArr;
}

void PrintUnion(vector<int> arr1, vector<int>arr2){
    vector<int> ans = FindUnionUsingSet(arr1, arr2);
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}
int main() {
    vector<int> arr1;
    vector<int> arr2;
    int n1 = arr1.size();
    int n2 = arr2.size();
    cout<<"Enter the size of 1st array : ";
    cin>>n1;
    cout<<"Enter the element of 1st array : ";
    for(int i = 0; i<n1; i++){
        int x;
        cin>>x;
        arr1.push_back(x);
    }
    cout<<"Enter the size of 2n array : ";
    cin>>n2;
    cout<<"Enter the element of 2nd array : ";
    for(int i = 0; i<n2; i++){
        int x;
        cin>>x;
        arr2.push_back(x);
    }

    PrintUnion(arr1, arr2);
}