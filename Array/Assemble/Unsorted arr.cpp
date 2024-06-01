// find the Minimum length Unsorted Subarray, sorting which makes the complete array sorted
#include<bits/stdc++.h>
using namespace std;
void printUnsorted(int arr[],int n)
{
    int l = 0, r = n-1, i, max,min;
    for (l = 0; l < n-1; l++)
    {
        if (arr[l] > arr[l+1])
            break;
    }
    if (l == n-1)
    {
        cout << "The complete array is sorted";
        return;
    }
    for(r = n - 1; r > 0; r--)
    {
        if(arr[r] < arr[r-1])
            break;
    }
    max = arr[l]; min = arr[l];
    for(i = l + 1; i <= r; i++)
    {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    for( i = 0; i < l; i++)
    {
        if(arr[i] > min)
        { 
            l = i;
            break;
        }     
    } 
    for( i = n -1; i >= r+1; i--)
    {
        if(arr[i] < max)
        {
            r = i;
            break;
        } 
    }
    cout << "The unsorted subarray which makes the given array sorted lies between the indices " << l << " and " << r;
    return;
}
int main()
{
    int arr[] = {10, 12, 20, 30, 25,40, 32, 31, 35, 50, 60};
    int n = sizeof(arr)/sizeof(arr[0]);
    printUnsorted(arr, n);
    getchar();
    return 0;
}
