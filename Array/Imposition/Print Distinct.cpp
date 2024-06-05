//print all distinct elements in a given array
#include <bits/stdc++.h>
using namespace std;
void printDistinct(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        // Check if the picked element is already printed
        int j;
        for (j=0; j<i; j++)
           if (arr[i] == arr[j])
               break;
        // If not printed earlier, then print it
        if (i == j)
          cout << arr[i] << " ";
    }
}
void print_Distinct(int arr[], int n)
{
    sort(arr, arr + n);
    for (int i=0; i<n; i++)
    {
       // Move the index ahead while there are duplicates
       while (i < n-1 && arr[i] == arr[i+1])
          i++;
    // print last occurrence of the current element
       cout << arr[i] << " ";
    }
}
void printDistinct(int arr[],int n)
{
    unordered_set<int> s;
    for (int i=0; i<n; i++)
    {
        if (!s.count(arr[i]))
        {
            s.insert(arr[i]);
            cout << arr[i] << " ";
        }
    }
}
int main()
{
    int arr[] = {6, 10, 5, 4, 9, 120, 4, 6, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    printDistinct(arr, n);
    print_Distinct(arr, n);
    return 0;
}
