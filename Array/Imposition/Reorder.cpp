#include <bits/stdc++.h>
using namespace std;
 
// Comparator function to sort pairs based on the second
// element
bool comp(const pair<int, int>& v1,
          const pair<int, int>& v2)
{
    // Sort in ascending order of index values
    return v1.second < v2.second;
}
 
// Function to reorder elements of arr[] according to index[]
void reorder(int arr[], int index[], int n)
{
    vector<pair<int, int> > a(n);
    //each pair stores the original element & its corresponding index
    for (int i = 0; i < n; i++) {
        a[i].first = arr[i];
        a[i].second = index[i];
    }
 
    // Sort the vector of pairs based on the second element (index) using the comp() comparator function
    sort(a.begin(), a.end(), comp);
    // Copy the sorted elements back to the original arr[]
    for (int i = 0; i < n; i++) {
        arr[i] = a[i].first;
    }
}
// Function to reorder elements of arr[] according to index[]
void reorder(int arr[], int index[], int n)
{
    int temp[n];
 
    // arr[i] should be present at index[i] index
    for (int i=0; i<n; i++)
        temp[index[i]] = arr[i];
 
    // Copy temp[] to arr[]
    for (int i=0; i<n; i++)
    { 
       arr[i]   = temp[i];
       index[i] = i;
    }
}
void reorder(int arr[], int index[], int n)
{
    // Fix all elements one by one
    for (int i=0; i<n; i++)
    {
        // While index[i] and arr[i] are not fixed
        while (index[i] != i)
        {
            // Store values of the target (or correct) position before placing arr[i] there
            int  oldTargetI  = index[index[i]];
            char oldTargetE  = arr[index[i]];
 
            // Place arr[i] at its target (or correct)position. Also copy corrected index for new position
            arr[index[i]] = arr[i];
            index[index[i]] = index[i];
 
            // Copy old target values to arr[i] and index[i]
            index[i] = oldTargetI;
            arr[i]   = oldTargetE;
        }
    }
}
int main()
{
    int arr[]{ 50, 40, 70, 60, 90 };
    int index[]{ 3, 0, 4, 1, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    //to rearrange elements in arr[] based on index[]
    reorder(arr, index, n);
    cout <<"\nReordered array is: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
 
    return 0;
}
