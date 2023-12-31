//sort matrix in all-way 
#include<bits/stdc++.h> 
using namespace std; 
#define N 3 

void sortAllWay(int arr[][N]) 
{ 
    // Consider matrix elements (in row major order) and sort the sequence. 
    int *ptr = (int *)arr; 
    sort(ptr, ptr+N*N); 
} 
int main() 
{ 
    int arr[N][N] = {1, 0, 3, 
                     2, 5, 6, 
                     9, 4, 8}; 
    sortAllWay(arr); 
  
    for (int i=0; i<N; i++) 
    { 
        for (int j=0; j<N; j++) 
           { cout <<arr[i][j]<< " "; }
        cout <<"\n"; 
    } 
    return 0; 
} 
