#include <bits/stdc++.h>
using namespace std;
void Pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void Pattern2(int n){
    for(int i =0 ; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void Pattern3(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int x;
    cout << "Enter the value of x : " << endl;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int n;
        cin >> n;
        Pattern3(n);
    }
}
