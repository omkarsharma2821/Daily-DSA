// Find all factorial numbers less than or equal to n

#include<bits/stdc++.h>
using namespace std;

vector<long long>factorialOfNumbers(long long n){
    vector<long long>result;
    long long fact = 1;

    for(int i = 1; i<=n; i++){
        fact *= i;
        if(fact > n) break;
        result.push_back(fact);
    }
    return result;
}

int main(){
    long long n ;
    cout<<"Enter N : ";
    cin>>n;
    vector<long long>ans = factorialOfNumbers(n);
    for(auto it: ans)
    cout<<it<<" ";
}