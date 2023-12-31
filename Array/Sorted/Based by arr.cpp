//sort an array according to the order defined by another array
#include <bits/stdc++.h>
using namespace std;

void sortA1ByA2(vector<int>& arr1, vector<int>& arr2)
{
    //map to store the indices of second array so that we can easily judge the position of two elements in first array
    unordered_map<int, int> index;
 
    for (int i = 0; i < arr2.size(); i++) {
        // assigning i+1.because by default value of map is zero
        // Consider only first occurrence of element
        if (index[arr2[i]] == 0) {
            index[arr2[i]] = i + 1;
        }
    }
    // comparator function that sorts arr1 based on order defined in arr2
    auto comp = [&](int a, int b) {
        // if indices of two elements are equal we need to sort them in increasing order
        if (index[a] == 0 && index[b] == 0)
            return a < b;
        // if a not present in arr2 then b should come before it
        if (index[a] == 0)
            return false;
        // if b not present in arr2 then no swap
        if (index[b] == 0)
            return true;
        // sorting in increasing order
        return index[a] < index[b];
    };
    sort(arr1.begin(), arr1.end(), comp);
}
int main()
{
    vector<int> arr1{ 2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8, 7, 5, 6, 9, 7, 5 };
    vector<int> arr2{ 2, 1, 8, 3, 4, 1 };
 
    sortA1ByA2(arr1, arr2);
    cout << "Sorted array is  \n";
    for (auto i : arr1) 
    {
        cout << i << " ";
    }
    return 0;
}
