#include<bits/stdc++.h>
using namespace std;

int Remove_duplicate_elements(int arr[], int n){
    int i = 0; 
    for(int j = 1; j<n; j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}

int main(){
int arr[] = {1,2,2,3};
int n = sizeof(arr)/sizeof(arr[0]);
int ans = Remove_duplicate_elements(arr, n);
for(int i = 0; i<ans; i++){
    cout<<arr[i]<<" ";
}
}