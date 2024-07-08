#include<iostream>
using namespace std;
int getmax(int num[],int size)
{
    int max = INT8_MIN;
    for(int i = 0 ; i<size; i++)
    {
        if(num[i]>max){
        max = num[i];
        }
    }
    return max;
}
int getmin(int num[], int size)
{
    int min = INT8_MAX;
    for(int i = 0 ; i<size ; i++)
    {
        if(num[i]<min){
        min = num[i];
        }
    }
    return min;
}

int main(){

    int size;
    int arr[100];

    cout<<"Enter the size : "<<endl;
    cin>>size;
    cout<<"Enter the elements :"<<endl;
    for(int i = 0 ; i<size; i++)
    cin>>arr[i];

    cout<<"maximum is "<<getmax(arr, size)<<endl;
    cout<<"minimum is "<<getmin(arr , size)<<endl;



}