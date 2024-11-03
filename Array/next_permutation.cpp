// Question :  next_permutation (find next lexicographically greater permutation)

#include <bits/stdc++.h>
using namespace std;

vector<int> NextPermutation(vector<int> &arr){
    int n = arr.size();
    // find the breakpoint
    int index = -1;
    for(int i = n-2; i>=0; i--){
        if(arr[i] < arr[i+1]){
            index = i;
            break;
        }
    }
    // if no break point 
    if(index == -1){
        reverse(arr.begin(), arr.end());
        return arr;
    }
    // find the closet element greater than the arr[index]
    for(int i = n-1; i>index; i--){
        if(arr[i] > arr[index]){
            swap(arr[i], arr[index]);
            break;
        }
    }

    // revrse the rest elements

    reverse(arr.begin() + index + 1, arr.end());
    return arr;
}

int main(){
    vector<int> arr = {3,2,1};
    NextPermutation(arr);
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}