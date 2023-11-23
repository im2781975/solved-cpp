//find the K-th smallest element
// after removing some integers from natural number.
#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;
 
int ksmallest(int arr[], int n, int k)
{
    int b[MAX];
    memset(b, 0, sizeof b);
 
    for (int i = 0; i < n; i++)
        b[arr[i]] = 1;
 
    for (int j = 1; j < MAX; j++) {
        // If j is unmarked, reduce k by 1.
        if (b[j] != 1)
            k--;
 
        // If k is 0 return j.
        if (!k)
            return j;
    }
}
int main()
{
    int k = 1;
    int arr[] = { 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << ksmallest(arr, n, k);
    return 0;
}
