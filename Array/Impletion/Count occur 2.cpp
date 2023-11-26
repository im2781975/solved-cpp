#include <bits/stdc++.h> 
using namespace std; 
int singleelement(int arr[], int n) 
{ 
      //hashmap to store frequency 
      unordered_map<int,int> mm; 
      for(int i=0;i<n;i++) 
    { 
          //storing frequency 
          mm[arr[i]]++; 
    } 
    for(auto x:mm) 
    { 
          //returning element with frequency 1 
          if(x.second==1) return x.first; 
    } 
} 
int singleElement(int arr[], int n) 
{ 
    int low = 0, high = n - 2; 
    int mid; 
    while (low <= high) { 
        mid = (low + high) / 2; 
        if (arr[mid] == arr[mid ^ 1]) 
            low = mid + 1; 
        else
            high = mid - 1; 
    } 
    return arr[low]; 
} 
int main() 
{ 
    int arr[] = { 2, 3, 5, 4, 5, 3, 4 }; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    sort(arr, arr + size); 
    cout << singleelement(arr, size)<<"\n";
    cout << singleElement(arr, size); 
    
    return 0; 
} 
