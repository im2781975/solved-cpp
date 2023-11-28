// O(n log(n) solution for finding smallest subarray with
// sum greater than x
#include <bits/stdc++.h>
using namespace std;
 
int smallestSubArrayLen(int target, vector<int>& nums)
{
    // Get the length of the input vector
    int n = nums.size();
    // If the vector is empty, return 0
    if (n == 0)
        return 0;
    // Initialize the minimum subarray length to INT_MAX-1
    int ans = INT_MAX - 1;
    // Create a new vector "sums" with size n+1, initialized
    // to all zeros
    vector<int> sums(n + 1, 0);
    // Compute the running sum of nums and store it in
    // "sums"
    for (int i = 1; i <= n; i++)
        sums[i] = sums[i - 1] + nums[i - 1];
    // Iterate through each starting index i
    for (int i = 1; i <= n; i++) {
        // Calculate the target sum for the subarray
        // starting at index i
        int to_find = target + sums[i - 1];
        // Find the first element in "sums" that is >=
        // to_find
        auto bound = lower_bound(sums.begin(), sums.end(),
                                 to_find);
        // If such an element is found and it is not equal
        // to to_find itself
        if (bound != sums.end() && *bound != to_find) {
            // Compute the length of the subarray and update
            // ans if necessary
            int len = bound - (sums.begin() + i - 1);
            ans = min(ans, len);
        }
    }
    // Return ans if it was updated, otherwise return 0
    return (ans != INT_MAX - 1) ? ans : 0;
}
 
/* Driver program to test above function */
int main()
{
    vector<int> arr1 = { 1, 4, 45, 6, 10, 19 };
    int target1 = 51;
    cout << "Length of Smallest Subarray :"
         << smallestSubArrayLen(target1, arr1) << endl;
 
    vector<int> arr2 = { 1, 10, 5, 2, 7 };
    int target2 = 9;
    cout << "Length of Smallest Subarray :"
         << smallestSubArrayLen(target2, arr2) << endl;
 
    vector<int> arr3 = { 1, 1, 1, 1, 1, 1, 1, 1 };
    int target3 = 11;
    cout << "Length of Smallest Subarray :"
         << smallestSubArrayLen(target3, arr3) << endl;
 
    vector<int> arr4
        = { 1, 11, 100, 1, 0, 200, 3, 2, 1, 250 };
    int target4 = 280;
    cout << "Length of Smallest Subarray :"
         << smallestSubArrayLen(target4, arr4) << endl;
 
    return 0;
}
