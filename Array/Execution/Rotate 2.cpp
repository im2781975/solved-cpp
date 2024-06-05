#include <bits/stdc++.h>
using namespace std;
//Function to left rotate arr[] of size n by d
void rotate(int arr[], int d,int n)
{
    int p = 1;
    while (p <= d) {
        int last = arr[0];
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = last;
        p++;
    }
}
// Function to rotate array
void rotate(int arr[], int d,int n)
{
    int temp[n];
    // Keeping track of the current index of temp[]
    int j = 0;
    // Storing the n - d elements of array arr[] to the front of temp[]
    for (int i = d; i < n; i++) {
        temp[j] = arr[i];
        j++;
    }
    // Storing the first d elements of array arr[] into temp
    for (int i = 0; i < d; i++) {
        temp[j] = arr[i];
        j++;
    }
    // Copying the elements of temp[] in arr[] to get the final rotated array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}
void printArray(int arr[],int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
//Function to get gcd of a and b
int gcd(int a, int b)
{
    if (b == 0)
        return a;
 
    else
        return gcd(b, a % b);
}
//Function to left rotate arr[] of size n by d
void leftRotate(int arr[], int d, int n)
{
    // To handle if d >= n 
    d = d % n;
    int g_c_d = gcd(d, n);
    for (int i = 0; i < g_c_d; i++) {
        // move i-th values of blocks 
        int temp = arr[i];
        int j = i;
 
        while (1) {
            int k = j + d;
            if (k >= n)
                k = k - n;
 
            if (k == i)
                break;
 
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}
int main()
{
    int arr[]{ 1, 2, 3, 4, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;
    rotate(arr, d, n);
    printArray(arr, n);
    printArray(arr, n);
    leftRotate(arr, d, n);
    vector<int> arr = { 1, 2, 3, 4, 5, 6 };
    int d = 2;
    rotateArray(arr, d);
    printArray(arr, n);
    return 0;
}
