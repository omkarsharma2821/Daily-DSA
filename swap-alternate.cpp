#include <iostream>
using namespace std;
void swap_alternate(int arr[], int size)
{
    int i=0;
    while (i+1 < size)
    {
        swap(arr[i], arr[i + 1]);
        i += 2;
    }
}
void printArray(int arr[], int size)
{
    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{

    int i, n;
    int even[6] = {1, 2, 3, 4, 5,6};

    swap_alternate(even, 6);
    printArray(even, 6);
    return 0;
}