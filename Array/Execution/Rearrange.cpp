//rearrange the elements in array such that even positioned are greater than odd positioned elements
#include <bits/stdc++.h>
using namespace std;
void rearrange(int arr[], int n)
{
    for (int i = 0; i < n-1; i+=2) {
            if (arr[i] < arr[i +1])
                swap(arr[i+1],arr[i]);
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
void assign(int a[], int n)
{
    sort(a, a + n);
    int ans[n];
    int p = 0, q = n - 1;
    for (int i = 0; i < n; i++) {
        // Assign even indexes with maximum elements
        if ((i + 1) % 2 == 0)
            ans[i] = a[q--];
        // Assign odd indexes with remaining elements
        else
            ans[i] = a[p++];
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
}
// Function to rearrange an array such that arr[i] = i.
void fixArray(int ar[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            // Check is any ar[j] exists such that ar[j] is equal to i
            if (ar[j] == i) {
                temp = ar[j];
                ar[j] = ar[i];
                ar[i] = temp;
                break;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if (ar[i] != i)
        {
            ar[i] = -1;
        }
    }
    cout << "\nArray after Rearranging: " ;
    for (i = 0; i < n; i++) {
        cout << ar[i] << " ";
    }
}
void fix_Array(int A[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (A[i] != -1 && A[i] != i)
        {
            int x = A[i];
 
            // check if desired place is not vacate
            while (A[x] != -1 && A[x] != x) 
            {
                // store the value from desired place
                int y = A[x];
 
                //place the x to its correct position
                A[x] = x;
                // now y will become x, now search the place for x
                x = y;
            }
            // place the x to its correct position
            A[x] = x;
            // check if while loop hasn't set the correct value at A[i]
            if (A[i] != i)
            {
                // if not then put -1 at the vacated place
                A[i] = -1;
            }
        }
    }
    cout << "\nArray after Fixing: " ;
    for (int i = 0; i < len; i++) 
        cout << A[i] << " ";
}
// Prints max at 1st position, min at 2nd position 2nd max at third position,2nd min at fourth position and so on. 
void rearrange(int arr[], int n) 
{ 
    int temp[n]; 
    // Indexes of smallest and largest elements from remaining array. 
    int small = 0, large = n - 1; 
    // To indicate whether we need to copy remaining largest or remaining smallest at next position 
    int flag = true; 
    for (int i = 0; i < n; i++) { 
        if (flag) 
            temp[i] = arr[large--];
        else
            temp[i] = arr[small++];
            
        flag = !flag; 
    } 
    // Copy temp[] to arr[] 
    for (int i = 0; i < n; i++) 
        arr[i] = temp[i]; 
} 
//rearrange an array such that arr[i] = i.
int* fixArray(int arr[], int n)
{
    vector<int> vec(n, -1);
    for (int i = 0; i < n; i++) {
        if (arr[i] != -1) {
            vec[arr[i]] = arr[i];
        }
    }
 
    for (int i = 0; i < n; i++) {
        arr[i] = vec[i];
    }
    return arr;
}
void fixArray(int arr[], int n)
{
 
    int i = 0;
    while (i < n) {
        int correct = arr[i];
        if (arr[i] != -1 && arr[i] != arr[correct]) {
          // if array element should be lesser than size & array element should not be at
          // its correct position then only swap with its correct position or index value
            swap(arr[i], arr[correct]);
        }
        else {
          // if element is at its correct position,just increment i and check for remaining array elements
            i++;
        }
    }
    return arr;
}
void fixArray(int arr[], int n)
{
    unordered_set<int> s;

    for(int i=0; i<n; i++)
    {
        if(arr[i] != -1)
         s.insert(arr[i]);
    }
  //put A[i] = i,if i is present in set
  for(int i=0; i<n; i++)
  {
    // if i(index) is found in hmap
    if(s.find(i) != s.end())
    {
      arr[i] = i;
    }
    // if i is not found
    else
    {
      arr[i] = -1;
    }
  }
}
int main()
{
    int A[] = { 1, 3, 2, 2, 5 };
    int n = sizeof(A) / sizeof(A[0]);
    cout<<"After assign: ";
    assign(A, n);
    cout<<"\nAfter rearrange: ";
    rearrange(A, n);
    fixArray(A, n);
    fix_Array(A, n);
    rearrange(arr, n); 
    cout << "\nAfter rearrange array is: "; 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    fixArray(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
