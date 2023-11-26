#include <bits/stdc++.h>
using namespace std;

// Function to rotate an array by k elements to the left
void rotateArray(vector<int>& arr, int d)
{
    int n = arr.size();
 
    // Mod k with the size of the array To handle the case where k is greater than the size of the array
    d %= n;
 
    // Reverse the first k elements
    reverse(arr.begin(), arr.begin() + d);
 
    // Reverse the remaining n-k elements
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(), arr.end());
}
int main()
{
    vector<int> arr = { 1, 2, 3, 4, 5, 6 };
    int d = 2;
    rotateArray(arr, d);
 
    for (int i : arr) {
        cout << i << " ";
    return 0;
}
