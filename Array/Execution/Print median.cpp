#include <bits/stdc++.h>
using namespace std;
//find position to insert current element of stream using binary search
int binarySearch(float arr[], float item, int low, int high)
{
    if (low >= high) {
        return (item > arr[low]) ? (low + 1) : low;
    }
    int mid = (low + high) / 2;
    if (item == arr[mid])
        return mid + 1;
 
    if (item > arr[mid])
        return binarySearch(arr, item, mid + 1, high);
 
    return binarySearch(arr, item, low, mid - 1);
}
// Function to print median of stream of integers
void printMedian(float arr[],int n)
{
    int i, j, pos;
    float num;
    int count = 1;
 
    cout << "Median after reading 1 element is " << arr[0] << "\n";
    for (i = 1; i < n; i++) {
        float median;
        j = i - 1;
        num = arr[i];
 
        //find position to insert current element in sorted part of array
        pos = binarySearch(arr, num, 0, j);
 
        // move elements to right to create space to insert the current element
        while (j >= pos) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = num;
        // increment count of sorted elements in array
        count++;
 
        // if odd number of integers are read from stream then middle element in sorted order is median
        // else average of middle elements is median
        if (count % 2 != 0) {
            median = arr[count / 2];
        }
        else {
            median = (arr[(count / 2) - 1] + arr[count / 2]) / 2;
        }
        cout << "Median after reading " << i + 1
             << " elements is " << median << "\n";
    }
}
void streamMed(int A[], int n)
{
    // Declared two max heap
    priority_queue<int> g, s;
   
    for (int i = 0; i < n; i++) {
        s.push(A[i]);
        int temp = s.top();
        s.pop();
       
        // Negation for treating it as min heap
        g.push(-1 * temp);
        if (g.size() > s.size()) {
            temp = g.top();
            g.pop();
            s.push(-1 * temp);
        }
        if (g.size() != s.size())
            cout << (double)s.top() << "\n";
        else
            cout << (double)((s.top() * 1.0 
                              - g.top() * 1.0)
                             / 2)
                 << "\n";
    }
}
int main()
{
    float arr[] = { 5, 15, 1, 3, 2, 8, 7, 9, 10, 6, 11, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int A[] = { 5, 15, 1, 3, 2, 8, 7, 9, 10, 6, 11, 4 };
    int x = sizeof(A) / sizeof(A[0]);
    printMedian(arr, n);
    streamMed(A, x);
    return 0;
}
