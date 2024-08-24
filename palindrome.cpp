#include<bits/stdc++.h>
using namespace std;

string Palindrome(int n){
    int temp = n; 
    int sum = 0;
    while(temp != 0){
        int digit = temp%10;
        sum = sum*10 + digit;
        temp = temp/10;
    }
    return (sum == n) ? "YES" : "NO";
}

int main(){
    int n;
    cin>>n;
    cout<<Palindrome(n);
}