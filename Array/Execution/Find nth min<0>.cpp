// find the Kth smallest element
// after removing some integer from first n natural number.
#include <bits/stdc++.h>
using namespace std;

int ksmallest(int arr[], int n, int k)
{
    sort(arr, arr + n);
 
    if (k < arr[0])
        return k;
 
    if (k == arr[0])
        return arr[0] + 1;
 
    if (k > arr[n - 1])
        return k + n;
 
    //If 1st element of array is 1
    if (arr[0] == 1)
        k--;
 
    // Reducing k by numbers before arr[0].
    else
        k -= (arr[0] - 1);
 
    // Finding k'th smallest element after removing
    // array elements.
    for (int i = 1; i < n; i++) {
        // Finding count of element between i-th
        // and (i-1)-th element.
        int c = arr[i] - arr[i - 1] - 1;
        if (k <= c)
            return arr[i - 1] + k;
        else
            k -= c;
    }
    return arr[n - 1] + k;
}
int main()
{
    int k = 1;
    int arr[] = { 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << ksmallest(arr, n, k);
    return 0;
}
