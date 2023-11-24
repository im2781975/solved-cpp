//Converted to idx
#include <bits/stdc++.h>
using namespace std;

void convert(int arr[], int n)
{
    vector<pair<int, int> > v;
 
    for (int i = 0; i < n; ++)
        v.push_back(make_pair(arr[i], i));
 
    sort(v.begin(), v.end());
 
    // Put indexes of modified vector in arr[]
    for (int i = 0; i < n; i++)
        arr[v[i].second] = i;
}
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[] = { 10, 20, 15, 12, 11, 50 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    cout << "\nArray is: ";
    printArr(arr, n);
 
    convert(arr, n);
 
    cout<<"\nConverted Array is: ";
    printArr(arr, n);
 
    return 0;
}
