#include <bits/stdc++.h>
using namespace std;
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
int main() {
    int arr[] = {1, 3, 3, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    findMajority(arr, n);
    return 0;
}
