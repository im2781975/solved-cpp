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
    int curSum = arr[0], start = 0, i;
    for (i = 1; i <= n; i++) {
        if (i < n)
            curSum += arr[i];
        if (curSum == sum) {
            cout << "\nSum found between indexes " << start << " & " << i - 1;
            return 1;
        }
        while (curSum > sum && start < i - 1) {
            curSum = curSum - arr[start];
            start++;
        }
    }
    // If we reach here, then no subarray
    cout << "\nNo subarray found";
    return 0;
}
vector<int>subarraySum(const vector<int>& arr, int sum)
{
    unordered_map<int, int> map;
    int curr_sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        curr_sum += arr[i];
        if (map.count(curr_sum - sum)) {
            return vector<int>(
                arr.begin() + map[curr_sum - sum] + 1,
                arr.begin() + i + 1);
        }
        map[curr_sum] = i;
    }
    return {};
}
int main()
{
    int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 23;
    subArraySum(arr, n, sum);
    sub_ArraySum(arr, n, sum);
    
    vector<int> arr = { 15, 2, 4, 8, 9, 5, 10, 23 };
    vector<int> subarray=subarraySum(arr, 23);
    if (subarray.empty()) 
        cout << "\nNo subarray with given sum found";
    else {
        cout << "Subarray: [ ";
        for (int i : subarray) {
            cout << i << " ";
        cout << "]";
        }
    }
    return 0;
}
