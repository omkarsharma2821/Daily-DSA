#include<iostream>
using namespace std;
int sum_of_element(int num[] , int n)
{
    int sum = 0; 
    // int i;
    for(int i = 0; i<n ; i++){
    sum = sum + num[i];
    }
    return sum;
}

int main()
{
    int size;
    int arr[100];
    cout<<"Enter the size :"<<endl;
    cin>>size;
    cout<<"Enter array element : "<<endl;
    for(int i = 0 ; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"sum of array element is : "<<sum_of_element(arr , size);
}