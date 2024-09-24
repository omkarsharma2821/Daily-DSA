// relationship between the Least Common Multiple (LCM) and the Greatest Common Divisor (GCD)  
// LCM(a,b)×GCD(a,b)=a×b

#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    if(b == 0) return a; // base case
    return GCD(b, a%b); // remainder becomes the new divisor & divisor becomes the new dividend
}
int LCM(int a, int b){
    return (a*b)/GCD(a,b);
}

int main(){
    cout<<GCD(15,10)<<endl; // 5
    cout<<LCM(15,10)<<endl;       // 30
    cout<< __gcd(11, 13); // inbuilt function to find gcd
}