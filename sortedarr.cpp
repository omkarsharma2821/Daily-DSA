#include<bits/stdc++.h>
using namespace std;

bool Check_Sorted_Array(vector<int>arr, int n){
    for(int i = 1; i<n; i++){
        if(arr[i]<arr[i-1])
            return false;
    }
    return true;
}

int main(){
    vector<int>arr = {1,2,3,4,5,6,7,8,9,10};
    int n = arr.size();
    int ans = Check_Sorted_Array(arr,n);
    cout<<ans;
}