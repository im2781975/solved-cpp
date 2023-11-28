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
int main()
{
    int A[] = { 1, 3, 2, 2, 5 };
    int n = sizeof(A) / sizeof(A[0]);
    cout<<"After assign: ";
    assign(A, n);
    cout<<"\nAfter rearrange: ";
    rearrange(A, n);
    return 0;
}
