// number of possible triangles using brute force approach
#include <bits/stdc++.h>
using namespace std;

//to count all possible triangles 
int findNumberOfTriangles(int arr[], int n)
{
    // Count of triangles
    int count = 0;
    // The three loops select three different values from array
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // The innermost loop checks for the triangle property
            for (int k = j + 1; k < n; k++)
                // Sum of two sides is greater than the third side
                if (arr[i] + arr[j] > arr[k] && arr[i] + arr[k] > arr[j]
                    && arr[k] + arr[j] > arr[i])
                    count++;
        }
    }
    return count;
}
int findNumberOf_Triangles(int arr[], int n)
{
    sort(arr, arr + n);
    // Initialize count of triangles
    int count = 0;
    // Fix the first element.need to run till n-3 as the other two elements are selected from arr[i+1...n-1]
    for (int i = 0; i < n - 2; ++i) {
        //index of the rightmost third element
        int k = i + 2;
        // Fix the second element
        for (int j = i + 1; j < n; ++j) {
            // Find the rightmost element which is smaller than the sum of two fixed elements. 
            // If value of arr[i] +arr[j-1] was greater than arr[k], then arr[i] + arr[j] must be greater than k, because the array is sorted.
            while (k < n && arr[i] + arr[j] > arr[k])
                ++k;
 
            // Total number of possible triangles that can be formed with the two fixed elements is
            // k - j - 1. The two fixed elements are arr[i] & arr[j]. All elements between arr[j+1]/ to
            // arr[k-1] can form a triangle with arr[i] & arr[j]. One is subtracted from k because k is
            // incremented one extra in above while loop. k will always be greater than j. 
            //If j becomes equal to k, then above loop will increment k, because arr[k] + arr[i] is always greater than arr[k]
            if (k > j)
                count += k - j - 1;
        }
    }
    return count;
}
int main()
{
    int arr[] = { 10, 21, 22, 100, 101, 200, 300 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Total number of triangles possible is "
         << findNumberOfTriangles(arr, size);
         
    cout << "\nTotal number of triangles possible is "
         << findNumberOf_Triangles(arr, size);
    return 0;
}
