#include<bits/stdc++.h>
using namespace std;

int rotate(vector<int>&arr, int d){
    int n = arr.size();
    d = d%n;
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.end());
    return arr;
}
int main() {
    int arr[5] = {1,2,3,4,5};
    rotate(arr, 5);
    return 0;
}