#include <bits/stdc++.h>
using namespace std;

int MaxConsecutiveOne(int arr[], int n){
    int cnt = 0; 
    int maxi = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == 1){
            cnt++;
        }else{
            cnt = 0;
        }
            maxi = max(cnt, maxi);
    }
    return maxi;
}

int main(){
int arr[] = {1,0,0,1,1,0,1,1,1,1};
int n = sizeof(arr)/sizeof(arr[0]);
int result = MaxConsecutiveOne(arr, n);
cout<<result;
}