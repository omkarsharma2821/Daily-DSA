#include<bits/stdc++.h>
using namespace std;

string LeapYear(int year){
    if((year%4 == 0 && year%100 != 0) || year%400 == 0)
    return "YES";
    else
    return "NO";
}
int main(){
    int year;
    cout<<"Enter year : ";
    cin>> year;
    cout<<LeapYear(year);
}