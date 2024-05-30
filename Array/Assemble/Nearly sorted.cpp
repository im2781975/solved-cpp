#include <bits/stdc++.h>
using namespace std;
  
void sortNearlySortedArray(int A[], int size, int k)
{
    int i, key, j;
    for (i = 1; i < size; i++) {
        key = A[i];
        j = i - 1;
  
        //Check if the previous element is greater than the current element, & shift elements to the right until the correct
          //position is found, but only if the current element is more than k positions away from its correct position 
        while (j >= max(0, i - k) && A[j] > key) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
    for(int i=0; i<size; i++)
        cout<<A[i]<<" ";
    cout<<endl;
}
int main()
{
    int A[] = {2, 6, 3, 12, 56, 8};
    int size = 6;
    int k = 3;
    sortNearlySortedArray(A, size, k);   
    return 0;
}
