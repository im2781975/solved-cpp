#include <iostream>
using namespace std;
int MultArray(int arr[], int n)
{
    if(n==0) 
        return 1;
    return arr[n-1] * MultArray( arr, n-1);
}
int sumArray(int arr[], int size) {
    if (size == 0) {
        return 0;
    }
    else {
        return arr[size - 1] + sumArray(arr, size - 1);
    }
}
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
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int result = sumArray(arr, size);
    int res = MultArray(arr, size);
    cout << "\nThe sum of the elements in the array is: " << result ;
    cout << "\nThe mult of the elements in the array is: " << res ;
    revereseArray(arr, 0, n);
    cout <<"\nReversed array is: ";
    printArray(arr, n); 
    return 0;
}
