//find the array element that appears only once 
#include <iostream> 
using namespace std; 
int findXOR(int ar[], int ar_size) 
{ 
    // Do XOR of all elements and return 
    int res = ar[0]; 
    for (int i = 1; i < ar_size; i++) 
        res = res ^ ar[i]; 
  
    return res; 
} 
int findSingle(int A[], int ar_size) 
{ 
    for (int i = 0; i < ar_size; i++) { 
        int count = 0; 
        for (int j = 0; j < ar_size; j++) { 
            // Count the frequency  of the element 
            if (A[i] == A[j]) { 
                count++; 
            } 
        } 
        // if the frequency of the element is one 
        if (count == 1) { 
            return A[i]; 
        } 
    } 
    return -1; 
} 
int main() 
{ 
    int ar[]{ 2, 3, 5, 4, 5, 3, 4 }; 
    int n = sizeof(ar) / sizeof(ar[0]); 
    cout << "Element occurring once is "<< findSingle(ar, n); 
    cout << "\nElement occurring after XOR: "<< findXOR(ar, n); 
    
    return 0; 
} 
