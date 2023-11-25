// sort an array with adjacent swaps allowed
#include<bits/stdc++.h>
using namespace std;
bool checkForSorting(int arr[], int n)
{
    for (int i=0; i<n-1; i++)
    {
        if (arr[i] > arr[i+1])
        {
            if (arr[i] - arr[i+1] == 1)
                swap(arr[i], arr[i+1]);
 
            else
                return false;
        }
    }
    return true;
}
int main()
{
    int arr[] = {1,0,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    if (checkForSorting(arr, n))
       cout << "Yes";
    else
       cout << "No";
}
