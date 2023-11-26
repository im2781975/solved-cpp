#include <iostream>
using namespace std;
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
    
    cout << "The sum of the elements in the array is: " << result ;
    
    return 0;
}

