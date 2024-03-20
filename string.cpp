#include<bits/stdc++.h>
using namespace std;
void reverse(string str){
    int n = str.length();
    for(int i=n-1;i>=0;i--){
        cout<<str[i];
    }
}
int main(){
    cout<<"Enter the string : ";
    string str;
    cin>>str;
    reverse(str);
}