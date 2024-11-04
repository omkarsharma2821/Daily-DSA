#include <bits/stdc++.h>
using namespace std;

vector<int> LeardersInArray(vector<int> &arr){
    int n = arr.size();
    int maxi = INT_MIN;
    vector<int> ans;

    for(int i = n-1; i>=0; i--){
        if(arr[i] > maxi){
            ans.push_back(arr[i]);
        }
        maxi = max(maxi,arr[i]);
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int>ans = LeardersInArray(arr);
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}