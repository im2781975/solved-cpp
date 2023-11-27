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
int main()
{
    int arr[] = { 1, 3, 5, 7, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    leftRotate(arr, n, k);
 
    k = 3;
    left_Rotate(arr, n, k);
 
    k = 4;
    leftRotation(arr, n, k);
    return 0;
}
