//find missing elements from an array
#include <bits/stdc++.h>
using namespace std;

void printMissing(int arr[], int n, int low,int high)
{
    sort(arr, arr + n);
    // Do binary search for 'low' in sorted array and find index of first element
    // which either equal to or greater than low.
    int* ptr = lower_bound(arr, arr + n, low);
    int index = ptr - arr;
 
    // Start from the found index and linearly search every range element x after this index in arr[]
    int i = index, x = low;
    while (i < n && x <= high) {
        // If x doesn't match with current element print it
        if (arr[i] != x)
            cout << x << " ";
        // If x matches, move to next element in arr[]
        else
            i++;
        // Move to next element in range [low, high]
        x++;
    }
    // Print range elements that are greater than the last element of sorted array.
    while (x <= high)
        cout << x++ << " ";
}
void findMissing(int arr[], int n, int low, int high) {
    // Loop through the range of numbers from low to high
    for (int i = low; i <= high; i++) {
        bool found = false;
        // Loop through the array to check if i exists in it
        for (int j = 0; j < n; j++) {
            if (arr[j] == i) {
                found = true;
                break;
            }
        }
        if (!found)
            cout << i << " ";
    }
}
//hashing based
void printmissing(int arr[], int n, int low,int high)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(arr[i]);

    for (int x = low; x <= high; x++)
        if (s.find(x) == s.end())
            cout << x << " ";
}

void printMissing(int arr[], int n,
    int low, int high)
{
    // Create boolean array of size high-low+1, each index i representing whether (i+low)th element found or not.
    bool range[high - low + 1] = { false };
 
    for (int i = 0; i < n; i++) {
        // if ith element of arr is in range low to high then mark corresponding index as true in array
        if (low <= arr[i] && arr[i] <= high)
            range[arr[i] - low] = true;
    }
    // Traverse through the range & print all elements  whose value is false
    for (int x = 0; x <= high - low; x++) {
        if (range[x] == false)
            cout << low + x << " ";
    }
}
int main()
{
    int arr[] = { 1, 3, 5, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 1, high = 10;
    printMissing(arr, n, low,high);
    return 0;
}
