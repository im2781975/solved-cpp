//find number of rotations  in a sorted and rotated array. 
#include <bits/stdc++.h> 
using namespace std; 
  
// Returns count of rotations for an array which is first sorted in ascending order, then rotated 
int countRotations(int arr[], int n) 
{ 
    // We basically find index of minimum  element 
    int min = arr[0], min_index = 0; 
    for (int i = 0; i < n; i++) { 
        if (min > arr[i]) { 
            min = arr[i]; 
            min_index = i; 
        } 
    } 
    return min_index; 
} 
int count_Rotations(int arr[],int n) 
{ 
    for (int i = 0; i < n; i++)
    { 
        // Index where element is greater than the next element 
            if (arr[i] > arr[i + 1] && i+1 <n) 
            { 
                return i + 1; 
            } 
        } 
    return -1;
} 
int main() 
{ 
    int arr[] = { 15, 18, 2, 3, 6, 12 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << countRotations(arr, n);
    cout << count_Rotations(arr, n);
    return 0; 
}
