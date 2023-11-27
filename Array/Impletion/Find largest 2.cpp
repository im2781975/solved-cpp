//find the second largest element in the array 
#include <iostream> 
using namespace std; 
int secondLargest(int arr[], int n) { 
    int largest = 0, secondLargest = -1; 

    for (int i = 1; i < n; i++) { 
        if (arr[i] > arr[largest]) 
            largest = i; 
    } 
    // finding the largest element in the array excluding the largest element calculated above 
    for (int i = 0; i < n; i++) { 
        if (arr[i] != arr[largest]) { 
            // first change the value of second largest as soon as the next element is found 
            if (secondLargest == -1) 
                secondLargest = i; 
            else if (arr[i] > arr[secondLargest]) 
                secondLargest = i; 
        } 
    } 
    return secondLargest; 
} 
// returns the index of second largest  if second largest didn't exist return -1 
int secondLargest(int arr[], int n) { 
    int first = 0, second = -1; 
    for (int i = 1; i < n; i++) { 
        if (arr[i] > arr[first]) { 
            second = first; 
            first = i; 
        } 
        else if (arr[i] < arr[first]) { 
            if (second == -1 || arr[second] < arr[i]) 
                second = i; 
        } 
    } 
    return second; 
} 
int main() { 
    int arr[] = { 12, 35, 1, 10, 34, 1 }; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int second_Largest = secondLargest(arr, n); 
    if (second_Largest == -1) 
        cout << "Second largest didn't exit\n"; 
    else
        cout << "Second largest : " << arr[second_Largest];
}
