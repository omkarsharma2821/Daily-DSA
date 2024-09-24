#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    if(b == 0) return a; // base case
    return GCD(b, a%b); // remainder becomes the new divisor & divisor becomes the new dividend
}

int main(){
    cout<<GCD(15,10); // 5
}