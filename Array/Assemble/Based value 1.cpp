//Function to sort array containing 0, 1 and 2
#include<bits/stdc++.h>
using namespace std;
void sort012(int arr[], int n)
{
    int l = 0, r = n-1;
    for(int i = 0; i< n && i<= r;)
    {
        if(arr[i] == 0)
        {
            swap(arr[l], arr[i]);
            l++; i++;
        }
        else if(arr[i] == 2)
        {
            swap(arr[r], arr[i]);
            r--; i++;
        }
        else 
            i++;
    }
}
void print(int *arr, int n)
{
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[]{2, 1, 0, 2, 1, 0, 0, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort012(arr, n);
    print(arr, n);
}
