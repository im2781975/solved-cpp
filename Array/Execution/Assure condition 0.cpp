//for the approach Ax*2+bx+c
#include<bits/stdc++.h>
using namespace std;
void applyEquation(int arr[], int n, int a, int b, int c) 
{
    for(int i=0; i<n; i++) 
    {
        arr[i] = a*arr[i]*arr[i] + b*arr[i] + c;
    }
}
int main() {
    int arr[]{ -21 ,-15, 12, 13, 14 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int a = -6, b = -7, c = 2;
    
    applyEquation(arr, n, a, b, c);
    sort(arr, arr+n);
    
      cout << "Array after sorting is : ";
    for(int i=0; i<n; i++) 
    {
        cout << arr[i] << " ";
    }
    return 0;
}
