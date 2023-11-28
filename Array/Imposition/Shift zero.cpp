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
        } 
    } 
    for (int i = 0; i < count; i++) { 
        // inserting the zero into vector 
        m.push_back(0); 
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
    return 0; 
} 
