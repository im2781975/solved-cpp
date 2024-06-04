// find number of subset containing consecutive numbers 
#include <bits/stdc++.h> 
using namespace std; 
//hashing approach
int countSubsets(int arr[], int n)
{ 
    unordered_set<int> s; 
    int count = 0; 
    
    for(int i = 0; i < n; i++) { 
        s.insert(arr[i]); 
    } 
    // iterate through the array again and for each element, check if it is the starting element of a subset 
    for(int i = 0; i < n; i++) { 
        if(s.find(arr[i]-1) == s.end()) { 
            int j = arr[i]; 
            // count the number of consecutive elements and add them to the set 
            while(s.find(j) != s.end()) { 
                j++; 
            } 
            count++; 
        } 
    } 
    return count; 
} 
int numofsubset(int arr[], int n) 
{ 
    sort(arr, arr + n); 
    int count = 1; 
    for (int i = 0; i < n - 1; i++) { 
        // Check if there is beginning of another 
        // subset of consecutive number 
        if (arr[i] + 1 != arr[i + 1]) 
            count++; 
    } 
    return count; 
} 
int main() 
{ 
    int arr[] = { 100, 56, 5, 6, 102, 58, 101, 57, 7, 103, 59 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << numofsubset(arr, n) ;
    cout << countSubsets(arr, n) ;
    return 0; 
}
