#include <bits/stdc++.h>
using namespace std;

int FindOnceOtherTwice(vector<int> arr)
{
    int n = arr.size();
    unordered_map<long long, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp)
    {
        if (it.second == 1)
        {
            return it.first;
        }
    }
}

int main()
{
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 4};
    int n = arr.size();
    int result = FindOnceOtherTwice(arr);
    cout << result;
}