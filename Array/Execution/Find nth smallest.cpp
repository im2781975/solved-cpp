//find the K-th smallest element after removing some integers from natural number.
#include <iostream>
#include <cstring>
#define MAX 1000000

using namespace std;
int ksmallest(int arr[], int n, int k)
{
    int b[MAX + 1]; 
    memset(b, 0, sizeof b);

    for (int i = 0; i < n; i++)
        b[arr[i]] = 1;

    for (int j = 1; j <= MAX; j++) { 
       // If j is unmarked, reduce k by 1.
        if (b[j] != 1)
            k--;
        //After decrementing k, it checks whether k has reached 0. If k is 0, it means that the current value of j is the K-th smallest element after removing some integers. In this case, the function returns this value (j).
        if (k == 0)
            return j;
    }
    return -1;
}
int main()
{
    int k = 1;
    int arr[] = {1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << ksmallest(arr, n, k) << endl;
    return 0;
}
