// recursion is the function that calls itself until a specific condition is met (base condition)
// stackoverflow and segmentation error

// print name N times using recursion 

#include<bits/stdc++.h>
using namespace std;

void print(int i, int n){
    if (i>n) return ;
    cout<<"Omkar 💀"<<endl;
    print(i+1, n);
}

int main(){
    int n;
    cin>>n;
    print(1,n);
}