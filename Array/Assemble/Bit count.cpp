//sort an array according to count of set bits. 
#include<bits/stdc++.h>
using namespace std;
int countBits(int num){
    int count = 0;
    while ( num ) 
    {
        // num & 1 checks the least significant bit. In our example, 1101 & 0001 results in 0001 (1 in decimal).
        //Since the result is non-zero, the condition is true, and count is incremented to 1.
        if ( num & 1)
        count++;
        num >>= 1;
    }
    return count;
}
void sortBySetBitCnt(int arr[],int n)
{
    vector<vector<int> > count(32);
    int setbitcount = 0;
    for (int i=0; i<n; i++)
    {
        setbitcount =countBits(arr[i]);
        count[setbitcount].push_back(arr[i]);
    }
    int j = 0; 
    // Traverse through all bit counts (Note that we
    // sort array in decreasing order)
    for (int i=31; i>=0; i--)
    {
        vector<int> v1 = count[i];
        for (int i=0; i<v1.size(); i++)
            arr[j++] = v1[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
void sortBySetBitCount(int arr[], int n)
{    
    multimap< int, int > count;
    for( int i = 0 ; i < n ; ++i ) 
    {
        //Multiplies the set bit count by -1 to negate it, ensuring a descending order sort.
        count.insert({(-1) * countBits(arr[i]), arr[i]});
    }
    multimap<int,int>::iterator it;
    for(it=count.begin(); it!=count.end(); it++)
        cout<<it->first<<" "<<it->second<<"\n";
}
int cmp(int a, int b)
{
    int count1 = countBits(a);
    int count2 = countBits(b);
    // this takes care of the stability of sorting algorithm too
    if (count1 <= count2)
        return false;
    return true;
}
void sortBySetBitCount(int arr[], int n)
{
    stable_sort(arr, arr + n, cmp);
}
// Function to simultaneously sort both arrays using insertion sort
void insertionSort(int arr[], int aux[], int n)
{
    for (int i = 1; i < n; i++) {
        
        int key1 = aux[i];
        int key2 = arr[i];
        int j = i - 1;
 
        // Move elements of arr[] & aux[],such that elements of aux[] are greater than key1, to one position ahead of their current position
        while (j >= 0 && aux[j] < key1) {
            aux[j + 1] = aux[j];
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        aux[j + 1] = key1;
        arr[j + 1] = key2;
    }
}

void sortBySetBitCount(int arr[], int n)
{
    int aux[n];
    for (int i = 0; i < n; i++)
        aux[i] = countBits(arr[i]);
 
    // Sort arr[] according to values in aux[]
    insertionSort(arr, aux, n);
}
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortBySetBitCount(arr, n);
    printArr(arr, n);
}
