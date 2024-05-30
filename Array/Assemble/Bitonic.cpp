#include<bits/stdc++.h>
using namespace std;
// sort even-placed elements in increasing & odd-placed in 
//decreasing order with constant space complexity
void bitonicGenerator(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) { 
        if (i % 2==0) 
            arr[i]=(-1)*arr[i]; 
    } 
    sort(arr,arr+n); 
    int mid=(n-1)/2; 
    for (int i = 0; i <= mid; i++)
        arr[i]=(-1)*arr[i]; 
      
    reverse(arr,arr+mid+1); 
    reverse(arr +mid+ 1,arr+n); 
} 
void bitonicGenerator(int arr[], int n) 
{ 
    int i = 1; 
    int j = n - 1; 
  
    if (j % 2 != 0) 
        j--; 
    while (i < j)
    { 
        swap(arr[i], arr[j]); 
        i += 2; j -= 2; 
    } 
    sort(arr, arr + (n + 1) / 2);
    sort(arr + (n + 1) / 2, arr + n, greater<int>()); 
} 
void bitonicGenerator(int arr[], int n) 
{ 
    vector<int> evenArr; 
    vector<int> oddArr; 
    for (int i = 0; i < n; i++)
    { 
        if (!(i % 2)) 
            evenArr.push_back(arr[i]); 
        else
            oddArr.push_back(arr[i]); 
    } 
    sort(evenArr.begin(), evenArr.end()); 
    sort(oddArr.begin(), oddArr.end(), greater<int>()); 
  
    int i = 0; 
    for (int j = 0; j < evenArr.size(); j++) 
        arr[i++] = evenArr[j]; 
    for (int j = 0; j < oddArr.size(); j++) 
        arr[i++] = oddArr[j]; 
} 
// sorts arr[0..n-1] in wave form arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= arr[5] ....
void sortInWave(int arr[], int n)
{
    for (int i = 0; i < n; i+=2)
    {
        if (i >0 && arr[i-1] > arr[i] )
            swap(&arr[i], &arr[i-1]);
        if (i<n-1 && arr[i] < arr[i+1] )
            swap(&arr[i], &arr[i + 1]);
    }
}
void sortInWave(int arr[], int n)
{
    sort(arr, arr+n);
    for (int i=0; i<n-1; i += 2)
        swap(&arr[i], &arr[i+1]);
}
void print(int *arr, int n)
{
    for(int i = 0; i< n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[] = {10, 90, 49, 2, 1, 5, 23};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortInWave(arr, n);
    bitonicGenerator(arr, n);
    return 0;
}
