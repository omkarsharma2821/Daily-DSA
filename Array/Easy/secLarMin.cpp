#include<bits/stdc++.h>
using namespace std;

int Second_Largest(vector<int>arr, int n){
    if(n<2) return -1;
    int largest = arr[0];
    int seclargest = -1;
    for(int i = 0; i<n; i++){
        if(arr[i]>largest){
            seclargest = largest;
            largest = arr[i];
        }
        else if(arr[i]>seclargest && arr[i] != largest){
            seclargest = arr[i];
        }
    }
    return seclargest;
}
int Second_Smallest(vector<int>arr, int n){
    if(n<2) return -1;
    int smallest = INT_MAX;
    int secsmallest = INT_MAX;
    for(int i = 0; i<n; i++){
        if(arr[i]<smallest){
            secsmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i]<secsmallest && arr[i] != smallest){
            secsmallest = arr[i];
        }
    }
    return secsmallest;
}

int main(){
int n;
cout<<"Enter the size of array :\n";
cin>>n;
vector<int>arr(n);
cout<<"Enter "<< n <<" array elements : \n";
for(int i = 0; i<n; i++){
    cin>> arr[i];
}
int sL = Second_Largest(arr, n);
cout<<"Second Largest element in the array is : "<<sL<<endl;
int sS = Second_Smallest(arr, n);
cout<<"Second Smallest element in the array is : "<<sS<<endl;
}
