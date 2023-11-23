//find maximum diff between freq of any two element such that element with greater freq
// is also greater in value.
#include<bits/stdc++.h>
using namespace std;
 
int maxdiff(int arr[], int n)
{
    unordered_map<int, int> freq;
 
    // Finding the frequency of each element.
    for (int i = 0; i < n; i++)
        freq[arr[i]]++;
 
    int ans = 0;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            // finding difference such that element
            // having greater frequency is also
            // greater in value.
            if (freq[arr[i]] > freq[arr[j]] &&
                arr[i] > arr[j] )
                ans = max(ans, freq[arr[i]]-freq[arr[j]]);
            else if (freq[arr[i]] < freq[arr[j]] &&
                      arr[i] < arr[j] )
                ans = max(ans, freq[arr[j]]-freq[arr[i]]);
        }
    }
    return ans;
}
int main()
{
    int arr[] { 3, 1, 3, 2, 3, 2 };
    int n = sizeof(arr)/sizeof(arr[0]);
 
    cout << maxdiff(arr, n) ;
    return 0;
}
