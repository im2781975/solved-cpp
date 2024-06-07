// find three elements whose sum is equal to zero
#include <bits/stdc++.h>
using namespace std;
void findTriplets(int arr[], int n)
{
    bool found = false;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == 0) {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                    found = true;
                }
            }
        }
    }
    // If no triplet with 0 sum found in array
    if (found == false)
        cout << " not exist " << endl;
}
void findTriplets(int arr[], int n)
{
    bool found = false;
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++) {
        int l = i + 1;
        int r = n - 1;
        while (l < r) {
            if (arr[i] + arr[l] + arr[r] == 0) {
                cout << arr[i] << " " << arr[l] << " " << arr[r] << "\n";
                l++; r--;
                found = true;
                //   break;
            }
            else if (x + arr[l] + arr[r] < 0)
                l++;
            else
                r--;
        }
    }
    if (found == false)
        cout << " No Triplet Found" << endl;
}
void findTriplets(int arr[], int n)
{
    bool found = false;
    for (int i = 0; i < n - 1; i++)
    {
        unordered_set<int> s;
        for (int j = i + 1; j < n; j++) {
            int x = -(arr[i] + arr[j]);
            if (s.find(x) != s.end()) {
                cout << x << " " << arr[i] << " " << arr[j] << "\n";
                found = true;
            }
            else
                s.insert(arr[j]);
        }
    }
    if (found == false)
        cout << " No Triplet Found" << endl;
}
int main()
{
    int arr[] = { 0, -1, 2, -3, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    findTriplets(arr, n);
    return 0;
}
