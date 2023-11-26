//Sentinel Linear Search
#include <bits/stdc++.h>
using namespace std;

void sentinelSearch(int arr[], int n, int key)
{
    // Last element of the array
    int last = arr[n - 1];
 
    // Element to be searched is placed at the last index
    arr[n - 1] = key;
    int i = 0;
    while (arr[i] != key)
        i++;
    // Put the last element back
    arr[n - 1] = last;
 
    if ((i < n - 1) || (arr[n - 1] == key))
        cout << "\nElement present at index " << i;
    else
        cout << "\nElement not present";
}
int main()
{
    int arr[] { 2, 3, 4, 10, 40 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int key = 10;
 
    sentinelSearch(arr, N, key);
 
    return 0;
}
