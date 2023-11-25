// make an array same to another using minimum number of swap 
#include <bits/stdc++.h> 
using namespace std; 
 
int minSwapsToSort(int arr[],int n) 
{ 
    pair<int, int> arrPos[n]; 
    for (int i = 0; i < n; i++) 
    { 
        arrPos[i].first = arr[i]; 
        arrPos[i].second = i; 
    } 
    // get right position of every element as second element of pair. 
    sort(arrPos, arrPos + n); 
  
    // To keep track of visited elements. Initialize all elements as not visited or false. 
    vector<bool> vis(n, false); 
  
    int ans = 0; 
    for (int i = 0; i < n; i++) 
    { 
        //already swapped and corrected || already present at correct pos 
        if (vis[i] || arrPos[i].second == i) 
            continue; 
  
        // find out the number of  node in this cycle and add in ans 
        int cycle_size = 0; 
        int j = i; 
        while (!vis[j]) 
        { 
            vis[j] = 1; 
            // move to next node 
            j = arrPos[j].second; 
            cycle_size++; 
        } 
        // Update answer by adding current cycle. 
        ans += (cycle_size - 1); 
    } 
    return ans; 
} 
  
// method returns minimum number of swap to make 
// array B same as array A 
int minSwapToMakeArraySame(int a[], int b[], int n) 
{ 
    //map to store idx of elements in array B basically store element to index mapping. 
    map<int, int> mp; 
    for (int i = 0; i < n; i++) 
        mp[b[i]] = i; 
  
    // now we're storing position of array A elements in array B. 
    for (int i = 0; i < n; i++) 
        b[i] = mp[a[i]]; 
     
    cout<<"Modified array B is: ";
    for (int i = 0; i < N; i++) 
        cout << b[i] << " "; 
    cout << endl; 
  
    return minSwapsToSort(b, n); 
} 
int main() 
{ 
    int a[] = {3, 6, 4, 8}; 
    int b[] = {4, 6, 8, 3}; 
  
    int n = sizeof(a) /sizeof(int); 
    cout << minSwapToMakeArraySame(a, b, n); 
    return 0; 
} 
