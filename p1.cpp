#include <bits/stdc++.h>
using namespace std;
void Pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void Pattern2(int n){
    for(int i =0 ; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
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
        Pattern2(n);
    }
}
