//find surpasser count of each element in array
#include <bits/stdc++.h>
using namespace std;

void findSurpasser(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        // stores surpasser count for element arr[i]
        int count = 0;
        for (int j = i + 1; j < n; j++)
            if (arr[j] > arr[i])
                count++;
        cout << count << " ";
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int arr[]{2, 7, 5, 3, 0, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    cout<<"Array is: ";
    printArray(arr, n);
 
    cout<<"\nSurpassare count array is: ";
    findSurpasser(arr, n);
    return 0;
}
