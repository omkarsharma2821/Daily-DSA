#include<bits/stdc++.h>
using namespace std;

vector<int>FirstAndLastOccurrencesOf_X(int x, vector<int>arr){
    vector<int>indices;
    int n = arr.size();
    for(int i = 0; i<n; i++){
        if(arr[i] == x){
            indices.push_back(i);
        }
    }
    if(indices.empty()){
        return {-1};
    }else{
        return {indices.front(), indices.back()};
    }
}

int main(){
    int x;
    cout<<"Enter the x :  ";
    cin>>x;
    vector<int>arr = {1,2,3,4,5,9,0,8,5};
    vector<int> ans = FirstAndLastOccurrencesOf_X(x, arr);
    cout << "First and last occurrences of x: ";
    for(int i : ans) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
