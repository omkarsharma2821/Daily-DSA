#include<bits/stdc++.h>
using namespace std;

vector<int>fibonacci(int n){
    vector<int>fib;
    int a = 0;
    int b = 1;
    int c = 0;
    fib.push_back(a);
    fib.push_back(b);
    for(int i=2; i<=n; i++){
        c = a + b;
        fib.push_back(c);
        a = b;
        b = c;
    }
    return fib;
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    vector<int>result = fibonacci(n);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
}

