//rearrange an array such that arr[i] = i.
#include <bits/stdc++.h>
using namespace std;
 
int* fixArray(int arr[], int n)
{
    vector<int> vec(n, -1);
    for (int i = 0; i < n; i++) {
        if (arr[i] != -1) {
            vec[arr[i]] = arr[i];
        }
    }
 
    for (int i = 0; i < n; i++) {
        arr[i] = vec[i];
    }
    return arr;
}
void fixArray(int arr[], int n)
{
 
    int i = 0;
    while (i < n) {
        int correct = arr[i];
        if (arr[i] != -1 && arr[i] != arr[correct]) {
          // if array element should be lesser than size & array element should not be at
          // its correct position then only swap with its correct position or index value
            swap(arr[i], arr[correct]);
        }
        else {
          // if element is at its correct position,just increment i and check for remaining array elements
            i++;
        }
    }
    return arr;
}
void fixArray(int arr[], int n)
{
    unordered_set<int> s;

    for(int i=0; i<n; i++)
    {
        if(arr[i] != -1)
         s.insert(arr[i]);
    }
  //put A[i] = i,if i is present in set
  for(int i=0; i<n; i++)
  {
    // if i(index) is found in hmap
    if(s.find(i) != s.end())
    {
      arr[i] = i;
    }
    // if i is not found
    else
    {
      arr[i] = -1;
    }
  }
}
int main()
{
    int arr[] = { -1, -1, 6, 1, 9, 3, 2, -1, 4, -1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    fixArray(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
