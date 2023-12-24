// find missing elements from an array
#include <bits/stdc++.h>
using namespace std;

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
    //printMissing(arr, n, low,high);
    printmissing(arr, n, low,high);
    return 0;
}
