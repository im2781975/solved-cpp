//sort an array according to count of set bits. 
#include<bits/stdc++.h>
using namespace std;
 
int setBitCount(int num){
    int count = 0;
    while ( num ) 
    {
        if ( num & 1)
        count++;
        num >>= 1;
    }
    return count;
}
// Function to sort according to bit count
// This function assumes that there are 32
// bits in an integer.
void sortBySetBitCnt(int arr[],int n)
{
    vector<vector<int> > count(32);
    int setbitcount = 0;
    for (int i=0; i<n; i++)
    {
        setbitcount =setBitCount(arr[i]);
        count[setbitcount].push_back(arr[i]);
    }
 
    int j = 0;  // Used as an index in final sorted array
 
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
        count.insert({(-1) * 
            setBitCount(arr[i]), arr[i]});
    }
    for(auto i : count)
    cout << i.second << " " ;
    cout << "\n" ;
}
int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortBySetBitCount(arr, n);
    //sortBySetBitCnt(arr, n);
}
