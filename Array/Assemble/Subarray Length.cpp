//Minimum length of subarray
#include<bits/stdc++.h>
using namespace std;
int minLength(vector<int>&arr)
{
    vector<int>tmp = arr;
    sort(tmp.begin(), tmp.end());
    int l = 0, r = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i]!=tmp[i])
        {
            l = i;
            break;
        }
    }
    for(int i = arr.size() -1; i >= 0; i--)
    {
        if(arr[i]!=tmp[i])
        {
            r = i;
            break;
        }
    }
    return (r - l +1);
}
int main()
{
    vector<int> arr{ 10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60 };
    cout << "Minimum length of subarray is : "
         << minLength(arr);
}
