//find maximum diff between freq of any two element such that element with greater freq is also greater in value.
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
            //  if the frequency & value of the element arr[i] is greater than the frequency & value of the element arr[j] at the same time, it means that arr[i] has a higher frequency and a greater value compared to arr[j].
            //In this case, the difference in frequencies (freq[arr[i]] - freq[arr[j]]) is calculated, and if it's greater than the current ans, it updates ans.
            if (freq[arr[i]] > freq[arr[j]] && arr[i] > arr[j] )
                
                ans = max(ans, freq[arr[i]]-freq[arr[j]]);
            else if (freq[arr[i]] < freq[arr[j]] && arr[i] < arr[j] )
                      
                ans = max(ans, freq[arr[j]]-freq[arr[i]]);
        }
    }
    return ans;
}
int maxdiff(int arr[], int n) 
{ 
    unordered_map<int, int> freq; 
    int dist[n]; 
    // Finding the frequency of each element. 
    int j = 0; 
    for (int i = 0; i < n; i++) 
    { 
        if (freq.find(arr[i]) == freq.end()) 
            dist[j++] = arr[i]; 
 
        freq[arr[i]]++; 
    } 
    // Sorting the distinct element
    sort(dist, dist + j); 
    int min_freq = n+1; 
 
    //Iterate through all sorted distinct elements For each distinct element, 
    //maintaining the element with minimum frequency than that element and also finding the maximum  frequency difference 
    int ans = 0; 
    for (int i=0; i<j; i++) 
    { 
        int cur_freq = freq[dist[i]]; 
        ans = max(ans, cur_freq - min_freq); 
        min_freq = min(min_freq, cur_freq); 
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
