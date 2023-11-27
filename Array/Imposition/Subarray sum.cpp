// print subarray with sum as given sum 
#include <bits/stdc++.h>
using namespace std;
//Returns true if the there is a subarray of arr[] with sum equal to 'sum' otherwise returns false. 
void subArraySum(int arr[], int n, int sum)
{
    // Pick a starting point
    for (int i = 0; i < n; i++) {
        int currentSum = arr[i];
 
        if (currentSum == sum) {
            cout << "\nSum found at indexes " << i ;
            return;
        }
        else {
            // Try all subarrays starting with 'i'
            for (int j = i + 1; j < n; j++) {
                currentSum += arr[j];
 
                if (currentSum == sum) {
                    cout << "\nSum found between indexes "<< i << " and " << j ;
                    return;
                }
            }
        }
    }
    cout << "\nNo Subarray found";
    return;
}
int sub_ArraySum(int arr[], int n, int sum)
{
    int currentSum = arr[0], start = 0, i;
    //Add elements one by one to currentSum & if the currentSum exceeds the sum, then remove starting element 
    for (i = 1; i <= n; i++) {
        while (currentSum > sum && start < i - 1) {
            currentSum = currentSum - arr[start];
            start++;
        }
        // If currentSum becomes equal to sum, then return true
        if (currentSum == sum) {
            cout << "\nSum found between indexes " << start << " & " << i - 1;
            return 1;
        }
        // Add this element to currentSum
        if (i < n)
            currentSum = currentSum + arr[i];
    }
    // If we reach here, then no subarray
    cout << "\nNo subarray found";
    return 0;
}
int main()
{
    int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 23;
    subArraySum(arr, n, sum);
    sub_ArraySum(arr, n, sum);
    return 0;
}
