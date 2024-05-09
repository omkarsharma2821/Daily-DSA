#include<bits/stdc++.h>
using namespace std;

vector<int> UnionArray(vector<int> a1, vector<int> a2){
    int n1 = a1.size();
    int n2 = a2.size();
    unordered_set<int> s;
    vector<int>ans;
    for(int i = 0; i<n1; i++){
        s.insert(a1[i]);
    }
    for(int i = 0; i<n2; i++){
        s.insert(a2[i]);
    }
    for(auto it: s){
        ans.push_back(it);
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    vector<int> arr1 = {1,2,3,4,5,5,4,3,2,1};
    vector<int> arr2 = {1,2,3,4,5,6,7,8,9,10};
    int n1 = arr1.size();
    int n2 = arr2.size();
    vector<int>temp = UnionArray(arr1, arr2);
    for(auto it : temp)
    cout<<it<<" ";
}