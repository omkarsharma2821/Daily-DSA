#include<bits/stdc++.h>
using namespace std;

#include <algorithm>

void RightRotate(int arr[], int n, int d){
    d = d%n;
    reverse(arr, arr+n-d);
    reverse(arr+n-d, arr+n);
    reverse(arr, arr+n);
}
void print(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    RightRotate(arr, n, 2);
    print(arr, n);
}