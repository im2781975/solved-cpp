//shift all zeros to right most side of array without affecting order of non-zero elements. 
#include <bits/stdc++.h> 
using namespace std; 
// function to shift zeros 
void move_zeros_to_right(vector<int>& m) 
{ 
    int count = 0; 
    int length=m.size(); 
    for (int i = 0; i < length; i++) { 
        if (m[i] == 0) { 
            count++; 
            m.erase(m.begin() + i);
              i--; 
              // The length gets decresed after erasing each element 
              length--; 
//Iterates through the vector and removes each zero encountered. The loop adjusts the iterator (i), length, and count accordingly
        } 
    } 
    for (int i = 0; i < count; i++) { 
        // inserting the zero into vector 
        m.push_back(0); 
    //Inserts the counted number of zeros to the right side of the vector
    } 
    cout << "\narray after shifting zeros to right side: ";
    for (int i = 0; i < m.size(); i++) { 
        cout << m[i] << " "; 
    } 
} 
int main() 
{ 
    vector<int> m{ 5, 6, 0, 4, 6, 0, 9, 0, 8 }; 
    move_zeros_to_right(m); 
    int A[] = { 5, 6, 0, 4, 6, 0, 9, 0, 8 }; 
    int n = sizeof(A) / sizeof(A[0]); 
    int B[n]; 
    int j = 0; 
    int count = 0; 
    for (int i = 0; i < n; i++) { 
        if (A[i] != 0) { 
            B[j] = A[i]; 
            j++; 
        } 
        else { 
            count++; 
        } 
    } 
    while (count > 0) { 
        B[j] = 0; 
        count--; 
        j++; 
    } 
    for (int i = 0; i < n; i++) { 
        A[i] = B[i]; 
    } 
  
    for (int i = 0; i < n; i++) { 
        cout << A[i] << " "; 
    }
    int A[] = { 5, 6, 0, 4, 6, 0, 9, 0, 8 }; 
    int n = sizeof(A) / sizeof(A[0]); 
    int j = 0; 
    for (int i = 0; i < n; i++) { 
        if (A[i] != 0) { 
            swap(A[j], A[i]); 
            j++; 
        } 
    } 
    for (int i = 0; i < n; i++) { 
        cout << A[i] << " ";
    } 
    return 0; 
}
