// Find the greatest common divisor of two numbers 
// appraoch Euclidean Algorithm
// Time Complexity: O(log(min(a,b)))
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    while(a > 0 && b > 0){
        if(a > b){
            a = a%b;
        } else {
            b = b%a;
        }
    }
    if(a == 0){
        return b;
    } else if (b == 0){
        return a;
    }
}

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int ans = GCD(a,b);
    cout<<ans;
}