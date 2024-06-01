//counting sort of arr[] according to the digit represented by exp
#include<iostream>
using namespace std;
int countSort(int arr[], int n, int exp)
{
    int output[n], i, count[n] ;
    for (int i=0; i < n; i++)
       count[i] = 0;
    // Store count of occurrences in count[]
    for (i = 0; i < n; i++)
        count[ (arr[i]/exp)%n ]++;
 
    // Change count[i] so that count[i] now contains actual position of this digit in output[]
    for (i = 1; i < n; i++)
        count[i] += count[i - 1];
    // Build the output array
    for (i = n - 1; i >= 0; i--)
    {
        output[count[ (arr[i]/exp)%n] - 1] = arr[i];
        count[(arr[i]/exp)%n]--;
    }
 
    // Copy the output array to arr[], so that arr[] now
    // contains sorted numbers according to current digit
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}
void sort(int arr[], int n)
{
    // counting sort for first digit in base n & second digit in base n
    countSort(arr, n, 1);
    countSort(arr, n, n);
}
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[] = {40, 12, 45, 32, 33, 1, 22};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Given array is\n";
    printArr(arr, n);
    sort(arr, n);
 
    cout << "\nSorted array is\n";
    printArr(arr, n);
    return 0;
}
