//sort an array according to the order defined by another array
#include <bits/stdc++.h>
using namespace std;
 // A Binary Search based function to find index of FIRST
// occurrence of x in arr[].  If x is not present, then it
// returns -1
int first(int arr[], int low, int high, int x, int n)
{
    if (high >= low) 
    {
        int mid = low + (high - low) / 2;

        // if the element is the extreme left
        if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
            return mid;
 
        // If the element lies on the right half
        if (x > arr[mid])
            return first(arr, (mid + 1), high, x, n);
 
        // Check for element in the left half
        return first(arr, low, (mid - 1), x, n);
    }
    
    return -1;
}
void sortAccording(int A1[], int A2[], int m, int n)
{
    // The temp array is used to store a copy of A1[] and
    // visited[] is used mark the visited elements in temp[].
    int temp[m], visited[m];
    for (int i = 0; i < m; i++) {
        temp[i] = A1[i];
        visited[i] = 0;
    }
    sort(temp, temp + m);
 
    // for index of output which is sorted A1[]
    int ind = 0;
 
    // Consider all elements of A2[], find them in temp[]
    // and copy to A1[] in order.
    for (int i = 0; i < n; i++) {
        // Find index of the first occurrence of A2[i] in
        // temp
        int f = first(temp, 0, m - 1, A2[i], m);
 
        // If not present, no need to proceed
        if (f == -1)
            continue;
 
        // Copy all occurrences of A2[i] to A1[]
        for (int j = f; (j < m && temp[j] == A2[i]); j++) {
            A1[ind++] = temp[j];
            visited[j] = 1;
        }
    }
 
    // Now copy all items of temp[]
    // which are not present in A2[]
    for (int i = 0; i < m; i++)
        if (visited[i] == 0)
            A1[ind++] = temp[i];
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int A1[] = { 2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8 };
    int A2[] = { 2, 1, 8, 3 };
    int m = sizeof(A1) / sizeof(A1[0]);
    int n = sizeof(A2) / sizeof(A2[0]);
 
    cout << "Sorted array is \n";
    sortAccording(A1, A2, m, n);
    printArray(A1, m);
    return 0;
}
