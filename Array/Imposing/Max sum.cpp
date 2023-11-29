#include <climits>
#include <iostream>
using namespace std;
 
int max_sum_rotation(int arr[], int n)
{
    int max_sum = INT_MIN; 
    for (int i = 0; i < n; i++) { 
    // loop through all possible rotations
        int sum = 0; 
        for (int j = 0; j < n; j++) { 
        // loop through all elements in the array
        int index= (i + j) % n; 
       // calculate the index of the current element after rotation
            sum += j * arr[index]; // add the product of the element with its index to the sum
        }
        max_sum = max(max_sum,sum);
        // update the maximum sum if necessary
    }
    return max_sum;
}
// Returns max possible value of i*arr[i]
int maxSum(int arr[], int n)
{
    // Find array sum and i*arr[i] with no rotation
    int arrSum = 0; 
    // Stores sum of arr[i]
    int currVal = 0; 
    // Stores sum of i*arr[i]
    for (int i = 0; i < n; i++) {
        arrSum = arrSum + arr[i];
        currVal = currVal + (i * arr[i]);
    }
    int maxVal = currVal;
 
    // Try all rotations one by one and find the maximum rotation sum.
    for (int j = 1; j < n; j++) {
        currVal = currVal + arrSum - n * arr[n - j];
        if (currVal > maxVal)
            maxVal = currVal;
    }
    return maxVal;
}
int main()
{
    int arr[] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr)/ sizeof(arr[0]);
    cout << max_sum_rotation(arr, n);
    cout << maxSum(arr, n);
    
    return 0;
}
