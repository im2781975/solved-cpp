// print array of strings in sorted order without copying one string into another
#include <bits/stdc++.h>
using namespace std;
void printInSortedOrder(string arr[], int n)
{
    int index[n];
    int i, j, min;
    // Initially the index of the strings are assigned to the 'index[]' 
    for (i=0; i<n; i++)
        index[i] = i;
    // selection sort 
    for (i=0; i<n-1; i++)    
    {
        min = i;
        for (j=i+1; j<n; j++)
        {
            //with the help of 'index[]' strings are being compared
            if (arr[index[min]].compare(arr[index[j]]) > 0)
                min = j;
        }
        // index of the smallest string is placed
        // at the ith index of 'index[]'
        if (min != i)
        {
            int temp = index[min];
            index[min] = index[i];
            index[i] = temp;
        }
    }
    for (i=0; i<n; i++)
        cout <<arr[index[i]]<< " ";
}
int main()
{
    string arr[] = {"geeks", "quiz", "geeks", "for"};
    int n = 4;
    printInSortedOrder(arr, n);
    return 0;
}
