#include<iostream>
using namespace std;

bool search(int arr[] , int n , int key){
    // traversing array
    for(int i = 0 ; i <n; i++ ){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){

int key;
int arr[10] = {1,2,3,4,5,6,8,9,12,-5};
cout<<"Enetr the key to be searched"<<endl;
cin>>key;

bool found = search(arr,10,key);

if(found)
{
    cout<<"element found";
}
else{
cout<<"absent";
}
}