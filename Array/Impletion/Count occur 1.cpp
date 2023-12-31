// find element that appears once 
#include <bits/stdc++.h> 
using namespace std; 

int singleNumber(int nums[],int n) 
{ 
    map<int,int> m; 
    long sum1 = 0,sum2 = 0; 
    for(int i = 0; i < n; i++) 
    { 
        if(m[nums[i]] == 0) 
        { 
            sum1 += nums[i]; 
            m[nums[i]]++; 
        } 
        sum2 += nums[i]; 
    } 
    return 2 * (sum1) - sum2; 
} 
int main() 
{ 
    int a[]{2, 3, 5, 4, 5, 3, 4}; 
    int n = 7; 
    cout << singleNumber(a,n) << "\n"; 
  
    int b[] = {15, 18, 16, 18, 16, 15, 89}; 
  
    cout << singleNumber(b,n); 
    return 0; 
} 
