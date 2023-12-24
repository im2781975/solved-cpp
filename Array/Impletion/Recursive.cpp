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
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int result = sumArray(arr, size);
    int res = MultArray(arr, size);
    cout << "\nThe sum of the elements in the array is: " << result ;
    cout << "\nThe mult of the elements in the array is: " << res ;
    return 0;
}

