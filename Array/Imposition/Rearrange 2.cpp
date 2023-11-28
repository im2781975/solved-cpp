//rearrange an array in minimum maximum form 
#include <bits/stdc++.h> 
using namespace std; 
  
// Prints max at 1st position, min at 2nd position 2nd max at third position,2nd min at fourth position and so on. 
void rearrange(int arr[], int n) 
{ 
    int temp[n]; 
    // Indexes of smallest and largest elements from remaining array. 
    int small = 0, large = n - 1; 
    // To indicate whether we need to copy remaining largest or remaining smallest at next position 
    int flag = true; 
    for (int i = 0; i < n; i++) { 
        if (flag) 
            temp[i] = arr[large--];
        else
            temp[i] = arr[small++];
            
        flag = !flag; 
    } 
    // Copy temp[] to arr[] 
    for (int i = 0; i < n; i++) 
        arr[i] = temp[i]; 
} 
int main() 
{ 
    int arr[] = { 1, 2, 3, 4, 5, 6 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
 
    rearrange(arr, n); 
    cout << "\nAfter rearrange array is: "; 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    return 0; 
}
