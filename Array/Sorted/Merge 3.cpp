#include <bits/stdc++.h>
using namespace std;
 
void merge(int arr1[], int arr2[], int n, int m)
{
    int i = 0;
    // while loop till last element of array 1(sorted) is greater than first element of array 2(sorted)
    while (arr1[n - 1] > arr2[0]) {
        if (arr1[i] > arr2[0]) {
            // swap arr1[i] with first element of arr2 and sorting the updated arr2(arr1 is already sorted)
            swap(arr1[i], arr2[0]);
            sort(arr2, arr2 + m);
        }
        i++;
    }
}
// Function to merge two arrays
void Merge(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0, k = n - 1;
 
    // Until i less than equal to k
    // or j is less than m
    while (i <= k && j < m) {
        if (arr1[i] < arr2[j])
            i++;
        else {
            swap(arr2[j++], arr1[k--]);
        }
    }
 
    // Sort first array
    sort(arr1, arr1 + n);
 
    // Sort second array
    sort(arr2, arr2 + m);
}
int main()
{
 
    int ar1[] = { 1, 5, 9, 10, 15, 20 };
    int ar2[] = { 2, 3, 8, 13 };
    int m = sizeof(ar1) / sizeof(ar1[0]);
    int n = sizeof(ar2) / sizeof(ar2[0]);
   // merge(ar1, ar2, m, n);
    Merge(ar1, ar2, m, n);
    cout << "After Merging \nFirst Array: ";
    for (int i = 0; i < m; i++)
        cout << ar1[i] << " ";
    cout << "\nSecond Array: ";
    for (int i = 0; i < n; i++)
        cout << ar2[i] << " ";
    return 0;
}

