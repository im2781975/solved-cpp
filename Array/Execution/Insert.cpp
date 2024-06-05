//insert operation in an sorted array. 
#include <bits/stdc++.h> 
using namespace std; 
  
// Inserts a key in arr[] of given capacity. n is current  size of arr[]. This function returns n+1 if insertion is successful, else n. 
int insertSorted(int arr[], int n, int key, int capacity) 
{ 
    // Cannot insert more elements if n is already more than or equal to capacity 
    if (n >= capacity) 
        return n; 
  
    int i; 
    for (i = n - 1; (i >= 0 && arr[i] > key); i--) 
        arr[i + 1] = arr[i]; 
  
    arr[i + 1] = key; 
    return (n + 1); 
} 
void insertElement(int arr[], int n, int x, int pos)
{
    //shift elements to the right which are on the right side of pos
    for (int i = n - 1; i >= pos; i--)
        arr[i + 1] = arr[i];
    arr[pos] = x;
}
int getInvCount(int arr[], int n)
{
    int inv_count = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                inv_count++;
 
    return inv_count;
}
int main() 
{ 
    int arr[20]{ 12, 16, 20, 40, 50, 70 }; 
    int capacity = sizeof(arr) / sizeof(arr[0]); 
    int n = 6; 
    int i, key = 26; 
  
    cout << "\nBefore Insertion: ";
    for (i = 0; i < n; i++) 
        cout << arr[i] << " "; 
  
    n = insertSorted(arr, n, key, capacity); 
  
    cout << "\nAfter Insertion: "; 
    for (i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    //-----
    int x = 10, pos = 2;
    insertElement(arr, n, x, pos);
    n++;
 
    cout<<"\nAfter insertion : ";
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout << " Number of inversions are "<<getInvCount(arr, n);
    return 0; 
}
