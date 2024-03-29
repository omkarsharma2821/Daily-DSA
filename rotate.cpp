#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& arr, int d){
    int n = arr.size();
    d = d%n;
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.end());
}
void print(vector<int> &arr, int size){
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main() {
    vector<int> arr = {1,2,3,4,5};
    rotate(arr, 5);
    print(arr, 5);
    return 0;
}