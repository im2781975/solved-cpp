// C++ program to merge two sorted arrays without using
// extra space
#include <bits/stdc++.h>
using namespace std;
 
void merge(int arr1[], int arr2[], int n, int m)
{
    // three pointers to iterate
    int i = 0, j = 0, k = 0;
    // for euclid's division lemma
    int x = 10e7 + 1;
    // in this loop we are rearranging the elements of arr1
    while (i < n && (j < n && k < m)) {
        // if both arr1 and arr2 elements are modified
        if (arr1[j] >= x && arr2[k] >= x) {
            if (arr1[j] % x <= arr2[k] % x) {
                arr1[i] += (arr1[j++] % x) * x;
            }
            else {
                arr1[i] += (arr2[k++] % x) * x;
            }
        }
        // if only arr1 elements are modified
        else if (arr1[j] >= x) {
            if (arr1[j] % x <= arr2[k]) {
                arr1[i] += (arr1[j++] % x) * x;
            }
            else {
                arr1[i] += (arr2[k++] % x) * x;
            }
        }
        // if only arr2 elements are modified
        else if (arr2[k] >= x) {
            if (arr1[j] <= arr2[k] % x) {
                arr1[i] += (arr1[j++] % x) * x;
            }
            else {
                arr1[i] += (arr2[k++] % x) * x;
            }
        }
        // if none elements are modified
        else {
            if (arr1[j] <= arr2[k]) {
                arr1[i] += (arr1[j++] % x) * x;
            }
            else {
                arr1[i] += (arr2[k++] % x) * x;
            }
        }
        i++;
    }
    // we can copy the elements directly as the other array
    // is exhausted
    while (j < n && i < n) {
        arr1[i++] += (arr1[j++] % x) * x;
    }
    while (k < m && i < n) {
        arr1[i++] += (arr2[k++] % x) * x;
    }
    // we need to reset i
    i = 0;
    // in this loop we are rearranging the elements of arr2
    while (i < m && (j < n && k < m)) {
        // if both arr1 and arr2 elements are modified
        if (arr1[j] >= x && arr2[k] >= x) {
            if (arr1[j] % x <= arr2[k] % x) {
                arr2[i] += (arr1[j++] % x) * x;
            }
            else {
                arr2[i] += (arr2[k++] % x) * x;
            }
        }
        // if only arr1 elements are modified
        else if (arr1[j] >= x) {
            if (arr1[j] % x <= arr2[k]) {
                arr2[i] += (arr1[j++] % x) * x;
            }
            else {
                arr2[i] += (arr2[k++] % x) * x;
            }
        }
        // if only arr2 elements are modified
        else if (arr2[k] >= x) {
            if (arr1[j] <= arr2[k] % x) {
                arr2[i] += (arr1[j++] % x) * x;
            }
            else {
                arr2[i] += (arr2[k++] % x) * x;
            }
        }
        else {
            // if none elements are modified
            if (arr1[j] <= arr2[k]) {
                arr2[i] += (arr1[j++] % x) * x;
            }
            else {
                arr2[i] += (arr2[k++] % x) * x;
            }
        }
        i++;
    }
    // we can copy the elements directly as the other array
    // is exhausted
    while (j < n && i < m) {
        arr2[i++] += (arr1[j++] % x) * x;
    }
    while (k < m && i < m) {
        arr2[i++] += (arr2[k++] % x) * x;
    }
    // we need to reset i
    i = 0;
    // we need to divide the whole arr1 by x
    while (i < n) {
        arr1[i++] /= x;
    }
    // we need to reset i
    i = 0;
    // we need to divide the whole arr2 by x
    while (i < m) {
        arr2[i++] /= x;
    }
}
 
// Driver code
int main()
{
 
    int ar1[] = { 1, 5, 9, 10, 15, 20 };
    int ar2[] = { 2, 3, 8, 13 };
    int m = sizeof(ar1) / sizeof(ar1[0]);
    int n = sizeof(ar2) / sizeof(ar2[0]);
    merge(ar1, ar2, m, n);
 
    cout << "After Merging \nFirst Array: ";
    for (int i = 0; i < m; i++)
        cout << ar1[i] << " ";
    cout << "\nSecond Array: ";
    for (int i = 0; i < n; i++)
        cout << ar2[i] << " ";
    return 0;
}
