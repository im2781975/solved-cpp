//find Majority element in an array
#include <bits/stdc++.h>
using namespace std;
 // Function to find Majority element in an array
void findMajority(int arr[], int n)
{
    int maxCount = 0;
    int index = -1; 
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
 
        // update maxCount if count of current element is greater
        if (count > maxCount) {
            maxCount = count;
            index = i;
        }
    }
 
    // if maxCount is greater than n/2 return the corresponding element
    if (maxCount > n / 2)
        cout << arr[index] << endl;
 
    else
        cout << "No Majority Element" << endl;
}
// Function to find Majority element in an array.it returns -1 if there is no majority element
int majorityElement(int *arr, int n)
{
    if (n == 1) return arr[0];
    int cnt = 1;
      // sort the array, o(nlogn)
    sort(arr, arr + n);
    for (int i = 1; i <= n; i++){
        if (arr[i - 1] == arr[i]){
            cnt++;
        }
        else{
            if (cnt > n / 2){
                return arr[i - 1];
            }
            cnt = 1;
        }
    }
    return -1;
}
// Function to count the occurrences
int countOccurrences(int arr[], int n, int num) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == num)
            count++;
    }
    return count;
}
// Function to find the majority element using recursion
int findMajorityUtil(int arr[], int low, int high) {
    
    if (low == high)
        return arr[low];
 
    //Divide the array into left and right halves
    int mid = (low + high) / 2;
    int leftMajority = findMajorityUtil(arr, low, mid);
    int rightMajority = findMajorityUtil(arr, mid+1, high);
 
    // If left and right halves have the same majority element
    if (leftMajority == rightMajority)
        return leftMajority;
 
    // Count the occurrences of the majority element in entire array
    int leftCount =countOccurrences(arr, high-low+1, leftMajority);
    int rightCount =countOccurrences(arr, high-low+1, rightMajority);
 
    // Return the element that occurs more than n/2 times
    if (leftCount > (high-low+1) / 2)
        return leftMajority;
    if (rightCount > (high-low+1) / 2)
        return rightMajority;
        
    return -1;
}
// Function to find the majority element
void findMajority(int arr[], int n) {
    int majority = findMajorityUtil(arr, 0, n-1);
    if (majority != -1)
        cout << majority << endl;
    else
        cout << "No Majority Element" << endl;
}
int main()
{
    int arr[] = { 1, 1, 2, 1, 3, 5, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    findMajority(arr, n);
 
    return 0;
}
