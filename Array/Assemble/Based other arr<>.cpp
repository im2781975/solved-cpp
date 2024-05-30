// sort an array according to the order defined by another array
#include <bits/stdc++.h>
using namespace std;
 
// sort A1 according to A2 using hash map 
void sortA1ByA2(int A1[], int N, int A2[], int M, int ans[])
{
    map<int, int> mp;
    int ind = 0;
    // initially storing frequency of each element of A1 in
    // map [ key, value ] = [ A1[i] , frequency[ A1[i] ] ]
    for (int i = 0; i < N; i++) {
        mp[A1[i]] += 1;
    }
 
    for (int i = 0; i < M; i++) {
 
        // checking if current element of A2 is present in A1 or not if not present go to next iteration
        // else store number of times it is appearing in A1 in ans array
        if (mp[A2[i]] != 0) {
 
            // mp[ A2[i] ] = frequency of A2[i] element in A1 array
            for (int j = 1; j <= mp[A2[i]]; j++)
                ans[ind++] = A2[i];
        }
 
        // to avoid duplicate storing of same element of A2 in ans array
        mp.erase(A2[i]);
    }
 
    // store the remaining elements of A1 in sorted order in
    // ans array
    for (auto it : mp) {
 
        // it.second = frequency of remaining elements
        for (int j = 1; j <= it.second; j++)
            ans[ind++] = it.first;
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int A1[] = { 2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8 };
    int A2[] = { 2, 1, 8, 3 };
    int n = sizeof(A1) / sizeof(A1[0]);
    int m = sizeof(A2) / sizeof(A2[0]);
 
    int ans[n];
    sortA1ByA2(A1, n, A2, m, ans);
 
    cout << "Sorted array is \n";
    printArray(ans, n);
 
    return 0;
}
