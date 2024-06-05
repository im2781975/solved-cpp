// working of lower_bound() & upper_bound()
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr1 = { 10, 15, 20, 25, 30, 35 };
 
    vector<int> arr2 = { 10, 15, 20, 20, 25, 30, 35 };
    
    vector<int> arr3 = { 10, 15, 25, 30, 35 };
 
    // using lower_bound() to check if 20 exists single occurrence prints 2
    cout << "\nThe position of 20 using lower_bound  (in single occurrence case) : "<< lower_bound(arr1.begin(), arr1.end(), 20)
                - arr1.begin();
 
    // using lower_bound() to check if 20 exists multiple occurrence prints 2
    cout << "\nThe position of 20 using lower_bound (in multiple occurrence case) : " << lower_bound(arr2.begin(), arr2.end(), 20)
                - arr2.begin();

    // using lower_bound() to check if 20 exists no occurrence
    // prints 2 ( index of next higher)
    cout << "\nThe position of 20 using lower_bound "
            "(in no occurrence case) : ";
    cout << lower_bound(arr3.begin(), arr3.end(), 20)
                - arr3.begin();
                
// using upper_bound() to check if 20 exists single occurrence
    // prints 3
    cout << "\nThe position of 20 using upper_bound (in single occurrence case) : " << upper_bound(arr1.begin(), arr1.end(), 20)
                - arr1.begin();
 
    // using upper_bound() to check if 20 exists multiple occurrence prints 4
    cout << "\nThe position of 20 using upper_bound (in multiple occurrence case) : "<< upper_bound(arr2.begin(), arr2.end(), 20)
                - arr2.begin();
 
    // using upper_bound() to check if 20 exists no occurrence
    // prints 2 ( index of next higher)
    cout << "\nThe position of 20 using upper_bound (in no occurrence case) : "<< upper_bound(arr3.begin(), arr3.end(), 20)
                - arr3.begin();
}
