// Given an array of size n, where every element is k away from its target position, sorts the array 
#include <bits/stdc++.h>
using namespace std;
 
void sortK(int arr[], int n, int k)
{
    // Insert first k+1 items in a priority queueWe assume, k < n.
    // if size of array = k .  k away from its target position then
    int size;
    size = (n == k) ? k : k + 1;
    priority_queue<int, vector<int>, greater<int> > pq(
        arr, arr + size);
    // i is index for remaining elements in arr[] and index is target 
    //index of for current minimum element is Min Heap 'pq'.
    int index = 0;
    // here even if size=k then n will be n=k,so i<n works fine
    for (int i = k + 1; i < n; i++){
        arr[index++] = pq.top();
        pq.pop();
        pq.push(arr[i]);
    }
    while (pq.empty() == false) {
        arr[index++] = pq.top();
        pq.pop();
    }
}
void sortNearlySortedArray(int A[], int size, int k)
{
    int i, key, j;
    for (i = 1; i < size; i++) {
        key = A[i];
        j = i - 1;
  
        //Check if the previous element is greater than the current element, & shift elements to the right until the correct
          //position is found, but only if the current element is more than k positions away from its correct position 
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
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int k = 3;
    int arr[] = { 2, 6, 3, 12, 56, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    sortK(arr, n, k);
    print(arr, n);
    sortNearlySortedArray(arr, n, k);
    print(arr, n);
    return 0;
}
