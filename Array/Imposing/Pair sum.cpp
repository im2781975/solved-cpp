// C++ Program Illustrating Naive Approach to
// Find if There is a Pair in A[0..N-1] with Given Sum
// Using Two-pointers Technique
 
// Importing required libraries
#include <bits/stdc++.h>
using namespace std;
 
// Two pointer technique based solution to find
// if there is a pair in A[0..N-1] with a given sum.
int isPairSum(vector<int>& A, int N, int X)
{
    // represents first pointer
    int i = 0;
 
    // represents second pointer
    int j = N - 1;
 
    while (i < j) {
 
        // If we find a pair
        if (A[i] + A[j] == X)
            return 1;
 
        // If sum of elements at current
        // pointers is less, we move towards
        // higher values by doing i++
        else if (A[i] + A[j] < X)
            i++;
 
        // If sum of elements at current
        // pointers is more, we move towards
        // lower values by doing j--
        else
            j--;
    }
    return 0;
}
// Fills element in arr[] from its pair sum array pair[]. 
// n is size of arr[]
void constructArr(int arr[], int pair[], int n)
{
    arr[0] = (pair[0]+pair[1]-pair[n-1]) / 2;
    for (int i=1; i<n; i++)
        arr[i] = pair[i-1]-arr[0];
}
int main()
{
    // array declaration
    vector<int> arr = { 2, 3, 5, 8, 9, 10, 11 };
 
    // value to search
    int val = 17;
 
    // size of the array
    int arrSize = arr.size();
 
    // array should be sorted before using two-pointer
    // technique
    sort(arr.begin(), arr.end());
 
    // Function call
    cout << (isPairSum(arr, arrSize, val) ? "True"
                                          : "False");
    int pair[] = {15, 13, 11, 10, 12, 10, 9, 8, 7, 5};
    int n = 5;
    int arr[n];
    constructArr(arr, pair, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
 
    return 0;
}
