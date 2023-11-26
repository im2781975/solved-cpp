// reverse an array 
#include <bits/stdc++.h> 
using namespace std; 
void revereseArray(int arr[], int start, int end) 
{ 
    while (start < end) 
    { 
        int temp = arr[start];  
        arr[start] = arr[end]; 
        arr[end] = temp; 
        start++; 
        end--; 
    }  
}      
void rvereseArray(int arr[], int start, int end) 
{ 
    if (start >= end) 
    return; 
      
    int temp = arr[start];  
    arr[start] = arr[end]; 
    arr[end] = temp; 
      
    // Recursive Function calling 
    rvereseArray(arr, start + 1, end - 1);  
}      
void printArray(int arr[], int size) 
{ 
   for (int i = 0; i < size; i++) 
   cout << arr[i] << " "; 
}  
int main()  
{ 
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    printArray(arr, n); 
    //rvereseArray(arr, 0, n); 
    revereseArray(arr, 0, n);

    cout <<"\nReversed array is: ";
    printArray(arr, n); 
      
    return 0; 
} 
