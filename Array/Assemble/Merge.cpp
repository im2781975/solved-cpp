// merge two sorted arrays with O(1) extra space.
#include <bits/stdc++.h>
using namespace std;
// Merge ar1[] and ar2[] 
void merge(int ar1[], int ar2[], int m, int n)
{
    // Iterate through all elements of ar2[] starting from the last element
    for (int i = n - 1; i >= 0; i--) {
        // Find the smallest element greater than ar2[i]. Move all elements one position ahead till the
        // smallest greater element is not found 
        int j, last = ar1[m - 1];
        for (j = m - 2; j >= 0 && ar1[j] > ar2[i]; j--)
            ar1[j + 1] = ar1[j];
 
        // If there was a greater element
        if (last > ar2[i]) {
            ar1[j + 1] = ar2[i];
            ar2[i] = last;
        }
    }
}
// swap function
void swapIfGrtr(int ar1[], int ar2[], int i, int j){
    if(ar1[i] > ar2[j]){
    swap(ar1[i], ar2[j]);
  }
}
void merge(int ar1[], int ar2[], int m, int n){
    int len = m+n;
    int gap = len/2 + (len%2);
     
    while(gap>0){
        int left=0, right = left + gap;
        while(right<len){
        //if left pointer is in ar1[] and right in ar2[]
        if(left<m && right>=m){
          swapIfGrtr(ar1, ar2, left, right-m);
        }
        //if both left and right pointers are in ar2[]
        else if(left>=m && right>=m){
          swapIfGrtr(ar2, ar2, left-m, right-m);
        }
        //if both left and right pointers are in ar1[]
        else{
          swapIfGrtr(ar1, ar1, left, right);
        }
        left++;
        right++;
      }
      if(gap==1){
        break;
      }
      //decrement the gap value if right reaches the end i.e len
      gap = (gap/2) + (gap%2);
    }
}
int main()
{
    int ar1[] = { 1, 5, 9, 10, 15, 20 };
    int ar2[] = { 2, 3, 8, 13 };
    int m = sizeof(ar1) / sizeof(ar1[0]);
    int n = sizeof(ar2) / sizeof(ar2[0]);
    merge(ar1, ar2, m, n);
 
    cout << "After Merging \nFirst Array: ";
    for (int i = 0; i < m; i++)
        cout << ar1[i] << " ";
    cout << "\nSecond Array: ";
    for (int i = 0; i < n; i++)
        cout << ar2[i] << " ";
    return 0;
}
