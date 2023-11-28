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
int main() 
{ 
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 10}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout << "Smallest missing element is " << 
        findFirstMissing(arr, 0, n-1) << endl; 
    int m=6;
    cout << "Smallest missing element is " << 
        findFirst_Missing(arr, 0, m) << endl; 
} 
