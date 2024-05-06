#include <iostream>
using namespace std;

int reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return 0;
}

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int i;
    int n;
    int arr[20] = {1, 2, 3, 4, 5, 0, 0, 0, 0, 0, 0, 0, 28};
    reverse(arr, 20);
    printarray(arr, 20);
    return 0;
}
