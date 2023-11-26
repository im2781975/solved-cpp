//Insert an element at a specific position in an Array
#include <bits/stdc++.h>
using namespace std;
void insertElement(int arr[], int n, int x, int pos)
{
    //shift elements to the right which are on the right side of pos
    for (int i = n - 1; i >= pos; i--)
        arr[i + 1] = arr[i];
    arr[pos] = x;
}
int main()
{
    int arr[]{ 2, 4, 1, 8, 5 };
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"\nBefore insertion : ";
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";

    int x = 10, pos = 2;
    insertElement(arr, n, x, pos);
    n++;
 
    cout<<"\nAfter insertion : ";
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
 
    return 0;
}
