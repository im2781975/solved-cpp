#include <bits/stdc++.h> 
using namespace std; 
int singleelement(int arr[], int n) 
{ 
      unordered_map<int,int> mp; 
      for(int i=0;i<n;i++) 
    { 
          mp[arr[i]]++; 
    } 
    for(auto it=mp.begin(); it!=mp.end(); it++)
    {
        if(it->second==1)
            cout<<it->first;
    }
} 
int singleElement(int arr[], int n) 
{ 
    int low = 0, high = n - 2; 
    int mid; 
    while (low <= high) { 
        mid = (low + high) / 2; 
        if (arr[mid] == arr[mid ^ 1]) 
        //XOR (^ 1) is used to find the adjacent element. If the middle element is equal to its adjacent element, it means the single element is on the right side, so update the low pointer accordingly.
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
