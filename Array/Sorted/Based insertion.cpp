//sort an array using insertion sort
#include <bits/stdc++.h>
using namespace std;
 
void insertionSort(int A[], int size)
{
    int i, key, j;
    for (i = 1; i < size; i++) {
        key = A[i];
        j = i - 1;
 
        //Move elements of A[], that are greater than key, to one position ahead of their current position.This loop will run at most k times 
        while(j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = key;
    }
   
  for(int i=0; i<size; i++)
      cout<<A[i]<<" ";
   
  cout<<endl;
}
int main()
{
      int A[] = {6, 5, 3, 2, 8, 10, 9};
      int size = 7;
      insertionSort(A, size);    
    return 0;
}
