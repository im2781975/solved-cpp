//sort a nearly sorted array.
#include <bits/stdc++.h>
using namespace std;
  
void sortNearlySortedArray(int A[], int size, int k)
{
    int i, key, j;
    for (i = 1; i < size; i++) {
        key = A[i];
        j = i - 1;
        //if the previous element is greater than the curr element,& shift elements to the right until the correct position is found, 
        //but only if the current element is more than k positions away from its correct position
        while (j >= max(0, i - k) && A[j] > key) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
    for(int i=0; i<size; i++)
        cout<<A[i]<<" ";
    cout<<endl;
}
// Given an array of size n, where every element is k away from its target position.
void sortK(int arr[], int n, int k)
{
 
    // Insert first k+1 items in a priority queue (or min
    // heap)(A O(k) operation). We assume, k < n. if size of array = k i.e k away from its target position then
    int size;
    size = (n == k) ? k : k + 1;
    priority_queue<int, vector<int>, greater<int> > pq(
        arr, arr + size);
 
    // i is index for remaining elements in arr[] and index is target index of for current minimum element in Min Heap 'pq'.
    int index = 0;
    // here even if size=k then n will be n=k,so i<n works fine
    for (int i = k + 1; i < n; i++) {
        arr[index++] = pq.top();
        pq.pop();
        pq.push(arr[i]);
    }
 
    while (pq.empty() == false) {
        arr[index++] = pq.top();
        pq.pop();
    }
}
// sort an array with adjacent swaps allowed
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
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << "\n";
}
int main()
{
    int arr[]= {2, 6, 3, 12, 56, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    sortNearlySortedArray(arr, n, k);   

    sortK(arr, n, k);
    printArray(arr, n);
    if (checkForSorting(arr, n))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
