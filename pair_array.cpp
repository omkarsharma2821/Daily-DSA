#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int, int> p[3];
    p[0] = {1,2};
    p[1] = {2,3};
    p[2] = {3,4};
    swap(p[0], p[2]);
    // cout<<p->first;
    for(int i = 0; i<3 ; i++){
        cout<<p[i].first<< " "<< p[i].second<<endl;
    }
}