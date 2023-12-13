// is sorted or not
#include <iostream>
using namespace std;
bool Is_sorted(int a[], int n)
{
    if (n == 1 || n == 0)
    {
        return true;
    }
    return a[n - 1] >= a[n - 2] &&
        Is_sorted(a, n - 1);
}
int main() 
{
    int arr[] = { 20, 23, 23, 45, 78, 88 };
    int n = sizeof(arr) / sizeof(arr[0]);
     
    if (Is_sorted(arr, n))
        cout << "Yes" << "\n";
    else
        cout << "No" << " \n";
    return 0;
}
