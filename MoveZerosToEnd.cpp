#include<bits/stdc++.h>
using namespace std; 

void MoveZeroToEnd(vector<int> &arr, int n){
    int j = -1;
    for(int i = 0; i<n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    for(int i = j+1; i<n; i++){
        if(arr[i] != 0 && j != -1){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main(){
    vector<int> arr = {1,0,2,2,1,0,1,2,5,0,6,7,8,9};
    int n = arr.size();
    MoveZeroToEnd(arr,n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}