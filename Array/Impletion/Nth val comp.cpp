// C++ program to demonstrate the use of std::nth_element 
#include <iostream> 
#include <algorithm> 
using namespace std; 
  
bool comp(int a, int b) 
{ 
    return (a < b); 
} 
int main() 
{ 
    int v[] = { 3, 2, 10, 45, 33, 56, 23, 47 }, i; 
  
    sort( v, v+8 );
    cout<<"After sort [] is: ";
    for (i = 0; i < 8; ++i) 
        cout << v[i] << " "; 
    
    nth_element(v, v + 4, v + 8, comp); 
    cout<<"\nAfter comp [] is: ";
    for (i = 0; i < 8; ++i) { 
        cout << v[i] << " "; 
    } 
    return 0; 
} 
