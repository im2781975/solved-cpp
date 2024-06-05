//find the smallest elements missing in a sorted array. 
#include<bits/stdc++.h> 
using namespace std; 
int findFirstMissing(int array[],  
    int start, int end) 
{ 
    if (start > end) 
        return end + 1; 
    if (start != array[start]) 
        return start; 
  
    int mid = (start + end) / 2; 
  
    if (array[mid] == mid) 
        return findFirstMissing(array, mid+1, end); 
  
    return findFirstMissing(array, start, mid); 
} 
int findFirst_Missing(int arr[],int n ,int m) 
{ 
   
  vector<int> vec(m,0); 
    
  for(int i=0;i<n;i++){ 
      vec[arr[i]]=1; 
  } 
    
  for(int i=0;i<m;i++){ 
      if(vec[i]==0){return i;} 
  } 
} 
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
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 10}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout << "Smallest missing element is " << 
        findFirstMissing(arr, 0, n-1) << endl; 
    int m=6;
    cout << "Smallest missing element is " << 
        findFirst_Missing(arr, 0, m) << endl; 
    vector<int> arr = {0, 1, 2, 3, 4, 5, 7}; 
    int n = arr.size(); 
    cout<<"First Missing element is : "<<findSmallestMissinginSortedArray(arr); 
} 
