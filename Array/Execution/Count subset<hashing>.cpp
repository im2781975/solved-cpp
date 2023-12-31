// find number of subset containing consecutive numbers implement hashing approach 
#include <bits/stdc++.h> 
using namespace std; 
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
int main() { 
    int arr[] = {100, 56, 5, 6, 102, 58, 101, 57, 7, 103}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int subsets = countSubsets(arr, n); 
    cout  << subsets << endl; 
    return 0; 
} 
