// Given an array arr containing n integers and an integer k.
// Your task is to find the length of the longest Sub-Array 
// with the sum of the elements equal to the given value k.
// both +ve,-ve elements

#include<bits/stdc++.h>
using namespace std;

int LongestSubarray(int arr[], int n,  int k){
    map<long long, int>preSum;
    long long sum = 0;
    int maxlen = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
        if(sum == k){
            maxlen = max(maxlen, i+1);
        }
        long long rem = sum - k;
        if(preSum.find(rem) != preSum.end()){
            int len = i - preSum[rem];
            maxlen = max(maxlen, len);
        }
        if(preSum.find(sum) == preSum.end()){
            preSum[sum] = i;
        }
    }
    return maxlen;
}

int main(){
    int k = 6;
    int arr[] = {-1, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = LongestSubarray(arr,n, k);
    cout<<ans;
}