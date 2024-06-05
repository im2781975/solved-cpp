//left rotation of an array K number of times
#include <bits/stdc++.h>
using namespace std;
// Function to leftRotate array multiple times
void leftRotate(int arr[], int n, int k)
{
    // for get starting point of rotated array 
    int mod = k % n;
    // Prints the rotated array from start position
    for (int i = 0; i < n; i++)
    {
        cout << (arr[(mod + i) % n]) << " ";
    }
    cout << "\n";
}
void left_Rotate(int arr[], int k, int n)
{
 
    //rotates function takes three parameters - the beginning,the position by which it should be rotated
    // ,the end address of the array The below function will be rotating the array left in linear time (k%arraySize) times
    rotate(arr, arr + (k % n), arr + n);

    for (int i = 0; i < n; i++)
       { cout << arr[i] << " ";}
    cout << "\n";
}
void leftRotation(int arr[], int k, int n)
{
      // if k>n , k%n will bring k back in range
     k = (k%n);
 
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
    reverse(arr,arr+n);

    for (int i = 0; i < n; i++)
        {cout << arr[i] << " ";}
    cout << "\n";
}
// Function to rotate an array by k elements to the right
void rotateArray(vector<int>& arr, int k)
{
    int n = arr.size();
 
    // Mod k with the size of the array To handle the case where k is greater than the size of the array
    k %= n;
    reverse(arr.begin(), arr.end());
    // Reverse the first k elements
    reverse(arr.begin(), arr.begin() + k);
    // Reverse the remaining n-k elements
    reverse(arr.begin() + k, arr.end());
}
// reverse arr[] from index start to end
void reverseArray(int arr[], int start, int end)
{
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
// Function to left rotate arr[] of size n by d
void leftRotate(int arr[], int d, int n)
{
    if (d == 0)
        return;
    // In case the rotating factor is greater than array length
    d = d % n;
    reverseArray(arr, 0, d - 1);
    reverseArray(arr, d, n - 1);
    reverseArray(arr, 0, n - 1);
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[] = { 1, 3, 5, 7, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    leftRotate(arr, n, k);

    vector<int> arr = { 1, 2, 3, 4, 5 };
    int k = 2;
    rotateArray(arr, k);
 
    for (int i : arr) {
        cout << i << " ";
    }
    return 0;
}
