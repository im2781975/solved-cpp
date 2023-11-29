//Find Minimum number of jumps to reach end 
#include <bits/stdc++.h> 
using namespace std; 
// Function to return the minimum number of jumps to reach arr[h] from arr[l] 
int minJumps(int arr[], int l,int h) 
{ 
    //when source and destination are same 
    if (h == l) 
        return 0; 
    // When nothing is reachable from the given source 
    if (arr[l] == 0) 
        return INT_MAX; 
    // Traverse through all the points reachable from arr[l] 
    // Recursively, get the minimum number of jumps needed to reach arr[h] from these reachable points 
    int min = INT_MAX; 
    for (int i = l + 1; i <= h && i <= l + arr[l]; i++) { 
        int jumps = minJumps(arr, i, h); 
        if (jumps != INT_MAX && jumps + 1 < min) 
            min = jumps + 1; 
    } 
    return min; 
} 
int min(int x, int y) { return (x < y) ? x : y; } 
  
//Returns minimum number of jumps  to reach arr[n-1] from arr[0] 
int minJumps(int arr[], int n) 
{ 
    // jumps[n-1] will hold the result 
    int* jumps = new int[n]; 
    int i, j; 
    if (n == 0 || arr[0] == 0) 
        return INT_MAX; 
    jumps[0] = 0; 
  
    // Find the minimum number of jumps to reach arr[i] from arr[0], and assign this value to jumps[i] 
    for (i = 1; i < n; i++) { 
        jumps[i] = INT_MAX; 
        for (j = 0; j < i; j++) { 
            if (i <= j + arr[j] && jumps[j] != INT_MAX) { 
                jumps[i] = min(jumps[i], jumps[j] + 1); 
                break; 
            } 
        } 
    } 
    return jumps[n - 1]; 
} 
int main() 
{ 
    int arr[] = { 1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "Minimum number of jumps to reach the end is " << minJumps(arr, 0,n-1); 
    return 0; 
} 
