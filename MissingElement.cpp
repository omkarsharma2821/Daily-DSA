#include <bits/stdc++.h>
using namespace std;

int Missing_Element(int arr[], int n)
{
    int sum = 0;
    int sum1 = (n * (n + 1)) / 2;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum1 - sum;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = Missing_Element(arr, n);
    cout << ans;
}