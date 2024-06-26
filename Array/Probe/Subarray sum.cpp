// Prefix sum 
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
// find the K-th largest sum of contiguous subarray using Prefix Sum and Sorting approach
int kthLargestSum(vector<int>& arr, int k)
{
    int n = arr.size();
    vector<int> Sum(n + 1);
    Sum[0] = 0;
    for (int i = 1; i <= n; i++) {
        Sum[i] = Sum[i - 1] + arr[i - 1];
    }
    // Create a vector to store all possible subarray sums.
    vector<int> vec;
    for (int i = 0; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            vec.push_back(Sum[j]- Sum[i]);
        }
    }
    // Sort the subarray sums in decreasing order.
    sort(Sums.begin(), Sums.end(),
         greater<int>());
    // Return the K-th largest sum of contiguous subarray.
    return Sums[k - 1];
}
int main()
{
    vector<int> arr = { 10, -10, 20, -40 };
    int k = 6;
    cout << kthLargestSum(arr, k);
    return 0;
}
