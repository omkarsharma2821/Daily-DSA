// Given a number N. Find the length of the longest consecutive 1s in its binary representation.

#include<bits/stdc++.h>
using namespace std;

int LongestConsecutive1s(int n){
    bitset<32>binary(n);
    int cnt = 0; 
    int maxcnt = 0;
    for(int i = 0; i<32; i++){
        if(binary[i] ==1){
            cnt += 1;
            maxcnt = max(maxcnt, cnt);
        }else{
            cnt = 0;
        }
    }
        cout<<"Binary of "<<n<<" is : "<<binary<<endl;
        return maxcnt;
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int ans = LongestConsecutive1s(n);
    cout<<ans;
}

