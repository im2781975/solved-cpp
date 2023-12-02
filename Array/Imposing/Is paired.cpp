// Find if There is a Pair in A[0..N-1] with Given Sum
#include <bits/stdc++.h>
using namespace std;
 
bool isPairSum(int A[], int N, int X)
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // as equal i and j means same element
            if (i == j)
                continue;
            // pair exists
            if (A[i] + A[j] == X)
                return true;
            // as the array is sorted
            if (A[i] + A[j] > X)
                break;
        }
    }
    //doesn't find any pair..
    return false;
}
int main()
{
    int arr[] = { 2, 3, 5, 8, 9, 10, 11 };
    int val = 17;
    int arrSize = *(&arr + 1) - arr;
    sort(arr, arr + arrSize);
    cout << isPairSum(arr, arrSize, val);
 
    return 0;
}
