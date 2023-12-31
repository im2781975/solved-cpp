//sort the Big integers in ascending order 
#include<bits/stdc++.h> 
using namespace std; 
 
bool comp(const string &left, const string &right) 
{ 
    // if length of both string are equals then sort them in lexicographically order 
    if (left.size() == right.size()) 
        return left < right; 
  
    // Otherwise sort them according to the length  of string in ascending order 
    else
        return left.size() < right.size(); 
} 
// Function to sort arr[] elements according to integer value 
void SortingBigIntegers(string arr[], int n) 
{ 
    vector<string> sortArr(arr, arr + n); 
  
    sort(sortArr.begin(), sortArr.end(), comp); 
 
    for (auto &ele : sortArr) 
        cout << ele << " "; 
} 
int main() 
{ 
    string arr[] = {"54", "724523015759812365462", "870112101220845", "8723"};
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    SortingBigIntegers(arr, n); 
  
    return 0; 
} 
