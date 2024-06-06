#include <iostream>
using namespace std;

void sentinelSearch(int arr[], int n, int key)
{
    int last = arr[n - 1];
 
    // Element to be searched is placed at the last index
    arr[n - 1] = key;
    int i = 0;
    while (arr[i] != key)
        i++;
    // Put the last element back
    arr[n - 1] = last;
 
    if ((i < n - 1) || (arr[n - 1] == key))
        cout << key << " is present at index " << i;
    else
        cout <<"Element Not found";
}

void sentinelSearch(int arr[], int n, int key)
{
    // Last element of the array
    int last = arr[n - 1];
 
    // Element to be searched is placed at the last index
    arr[n - 1] = key;
    int i = 0;
    while (arr[i] != key)
        i++;
    // Put the last element back
    arr[n - 1] = last;
 
    if ((i < n - 1) || (arr[n - 1] == key))
        cout << "\nElement present at index " << i;
    else
        cout << "\nElement not present";
}
//------

int sentinelLinearSearch(vector<int> array, int key) {
    int last = array[array.size() - 1];
    array[array.size() - 1] = key;
    //It saves the last element of the vector in the variable last.Then, it replaces the last element with the search key (key). This is the sentinel value used to terminate the search loop.
    int i = 0;
    while (array[i] != key) {
        i++;
    }
    array[array.size() - 1] = last;
    //After the loop, it restores the original last element of the vector.
    if (i < array.size() - 1 || last == key) {
        return i;
    } else {
        return -1;
    }
}
int main()
{
    int arr[] = { 10, 20, 180, 30, 60, 50, 110, 100, 70 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 180;
 
    sentinelSearch(arr, n, key);

    vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int key = 5;
    int index =sentinelLinearSearch(array, key);
    if (index == -1) {
        cout << key << " is not found in the array ";
    } else {
        cout << key << " is found at index " << index << " in the array ";
    }
    return 0;
}
