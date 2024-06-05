// find first n smallest numbers 
#include <iostream> 
#include <algorithm> 
using namespace std; 
bool comp(int a, int b) 
{ 
    return (a < b); 
} 
int main() 
{ 
    int v[] = { 30, 20, 10, 40, 60, 50, 70, 80 }, i; 
  
    sort(v, v+8);
    cout<<"After sort [asc] is: ";
    for (i = 0; i < 8; ++i)  
        cout << v[i] << " ";
    
    nth_element(v, v + 5, v + 8); 
    cout<<"\nAfter swap nth element [asc] is: ";
    for (i = 0; i < 8; i++)  
        cout << v[i] << " "; 
        
    sort(v, v+8,greater<int>());
    cout<<"\nAfter sort [dsc] is: ";
    for (i = 0; i < 8; ++i)  
        cout << v[i] << " ";
    
    nth_element(v, v + 5, v + 8,greater<int>()); 
    cout<<"\nAfter swap nth element [dsc] is: ";
    for (i = 0; i < 8; i++)
        cout << v[i] << " "; 
    nth_element(v, v + 4, v + 8, comp); 
    cout<<"\nAfter comp [] is: ";
    for (i = 0; i < 8; ++i) { 
        cout << v[i] << " "; 
    }
    return 0; 
}
