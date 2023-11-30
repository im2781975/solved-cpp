// find the K-th largest sum of subarray
#include <bits/stdc++.h>
using namespace std;
// Function to calculate Kth largest element in contiguous subarray sum
int kthLargestSum(int arr[], int N, int K)
{
    vector<int> result;
    for (int i = 0; i < N; i++) {
        int sum = 0;
        for (int j = i; j < N; j++) {
            sum += arr[j];
            result.push_back(sum);
        }
    }
    sort(result.begin(), result.end(), greater<int>());
    return result[K - 1];
}
int NthLargestSum(int arr[], int N, int K)
{
    // array to store prefix sums
    int sum[N + 1];
    sum[0] = 0;
    sum[1] = arr[0];
    for (int i = 2; i <= N; i++)
        sum[i] = sum[i - 1] + arr[i - 1];

    // priority_queue of min heap
    priority_queue<int, vector<int>, greater<int> > Q;
 
    // loop to calculate the contiguous subarray sum position-wise
    for (int i = 1; i <= N; i++) {
        // loop to traverse all positions that form contiguous subarray
        for (int j = i; j <= N; j++) {
            // calculates the contiguous subarray sum from j to i index
            int x = sum[j] - sum[i - 1];
// Example calculations:
// For i=1, j=3: x = sum[3] - sum[0] = 4 - 0 = 4
// For i=2, j=4: x = sum[4] - sum[1] = 9 - 3 = 6
// For i=3, j=5: x = sum[5] - sum[2] = 2 - 2 = 0

            // if queue has less than k elements,then simply push it
            if (Q.size() < K)
                Q.push(x);
            else {
                // it the min heap has equal to k elements then just check if the largest kth element is
                // smaller than x then insert else its of no use
                if (Q.top() < x) {
                    Q.pop();
                    Q.push(x);
                }
            }
        }
    }
    // the top element will be then kth largest element
    return Q.top();
}
int main()
{
    int a[] = { 20, -5, -1 };
    int N = sizeof(a) / sizeof(a[0]);
    int K = 2;
    cout << kthLargestSum(a, N, K);
    return 0;
}
