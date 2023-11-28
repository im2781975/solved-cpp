#include <bits/stdc++.h> 
using namespace std; 

int findFirstMissing(vector<int> arr , int start ,int  end,int first) 
{ 
    if (start < end) 
  { 
    int mid = (start + end) / 2; 
  
    // Index matches with value at that index, means missing element cannot be upto that programme.
    if (arr[mid] != mid+first) 
      return findFirstMissing(arr, start,mid , first); 
    else
      return findFirstMissing(arr, mid + 1, end , first); 
  } 
  return start + first; 
  
} 
int findSmallestMissinginSortedArray(vector<int> arr) 
{ 
    // Check if 0 is missing in the array 
    if(arr[0] != 0) 
    return 0; 
  
  // Check is all numbers 0 to n - 1 are present in array 
    if(arr[arr.size() - 1] == arr.size() - 1) 
    return arr.size(); 
  
    int first = arr[0]; 
    return findFirstMissing(arr, 0, arr.size() - 1, first); 
} 
int main() 
{ 
    vector<int> arr = {0, 1, 2, 3, 4, 5, 7}; 
    int n = arr.size(); 
    cout<<"First Missing element is : "<<findSmallestMissinginSortedArray(arr); 
} 
