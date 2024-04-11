#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &arr, int n, int d)
{
    d = d % n;
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(), arr.end());
}
void print(vector<int> &arr, int size, int d)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    rotate(arr, 5, 1);
    print(arr, 5, 1);
    return 0;
}