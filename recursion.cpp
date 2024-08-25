// recursion is the function that calls itself until a specific condition is met (base condition)
// stackoverflow and segmentation error

// print name N times using recursion 
// print N to  1 

#include<bits/stdc++.h>
using namespace std;

void print(int i, int n){
    if (i>n) return ;
    cout<<"Omkar 💀"<<endl;
    print(i+1, n);
}
void printNto1(int i, int n){
    if(i<1) return;
    cout<<i<<endl;
    printNto1(i-1, n);
}

int main(){
    int n;
    cin>>n;
    print(1,n);
    printNto1(n, n);
}