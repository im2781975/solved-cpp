//find the array element that appears only once 
#include <iostream> 
#include<bits/stdc++.h>
using namespace std; 
int findXOR(int arr[], int n) 
{ 
    // Do XOR of all elements and return 
    int res = arr[0]; 
    for (int i = 1; i < n; i++) 
        res = res ^ arr[i]; 
    return res; 
} 
int findSingle(int *arr, int n) 
{ 
    for (int i = 0; i < n; i++) { 
        int count = 0; 
        for (int j = 0; j < n; j++) { 
            // Count the frequency  of the element 
            if (arr[i] == arr[j])  
                count++; 
        } 
        // if the frequency of the element is one 
        if (count == 1) { 
            return arr[i]; 
        } 
    } 
    return -1; 
} 
int singleNumber(int nums[],int n) 
{ 
    map<int,int> m; 
    long sum1 = 0,sum2 = 0; 
    for(int i = 0; i < n; i++) 
    { 
        if(m[nums[i]] == 0) 
        { 
            sum1 += nums[i]; 
            m[nums[i]]++; 
        } 
        sum2 += nums[i]; 
    } 
    return 2 * (sum1) - sum2; 
} 
void singleelement(int arr[], int n)
{ 
      unordered_map<int,int> mp; 
      for(int i=0;i<n;i++)
          mp[arr[i]]++; 
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
        //XOR (^ 1) is used to find the adjacent element. If the middle element is equal 
        //to its adjacent element, it means the single element is on the right side, so update the low pointer accordingly.
            low = mid + 1; 
        else
            high = mid - 1; 
    } 
    return arr[low]; 
} 
int main() 
{ 
    int ar[]{ 2, 3, 5, 4, 5, 3, 4 }; 
    int n = sizeof(ar) / sizeof(ar[0]); 
    cout << "Element occurring once is "<< findSingle(ar, n); 
    cout << "\nElement occurring after XOR: "<< findXOR(ar, n) << "\n";
    cout << singleNumber(ar,n) << "\n"; 
    singleelement(ar, n);
    cout << "\n" << singleElement(ar, n) << "\n";
    return 0; 
} 
