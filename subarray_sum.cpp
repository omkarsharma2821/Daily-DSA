 #include<bits/stdc++.h>
 using namespace std;

 int Countpair(int arr[], int n, int sum){
        int i = 0;
        int j = n-1;
        int count = 0;
        while(i<j){
            int currentSum = arr[i] + arr[j];
            if(currentSum == sum){
            count++;
            i++;
            j--;
            }
            else if (currentSum < sum){
            i++;
            }
            else{
            j--;
            }
        }
        return count > 0 ? count : -1;
 }
 int main() {
    int n;
    cout<<"Enter the size of the array:"<<endl;
    cin >> n;
    int arr[n];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sum;
    cout<<"Enter the sum:"<<endl;
    cin >> sum;
    cout << Countpair(arr, n, sum);
    return 0;
 }