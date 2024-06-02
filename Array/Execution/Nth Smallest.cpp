//find the K-th smallest element after removing some integers from natural number.
#include <iostream>
#include <cstring>
#define MAX 1000000
using namespace std;
int ksmallest(int arr[], int n, int k)
{
    sort(arr, arr + n);
    if (k < arr[0])
        return k;
    if (k == arr[0])
        return arr[0] + 1;
    if (k > arr[n - 1])
        return k + n;
    //If 1st element of array is 1
    if (arr[0] == 1)
        k--;
 
    // Reducing k by numbers before arr[0].
    else
        k -= (arr[0] - 1);
 
    // Finding k'th smallest element after removing array elements.
    for (int i = 1; i < n; i++) {
        // Finding count of element between i-th & (i-1)-th element.
        int c = arr[i] - arr[i - 1] - 1;
        if (k <= c)
            return arr[i - 1] + k;
        else
            k -= c;
    }
    return arr[n - 1] + k;
}
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
        if (k == 0)
            return j;
    }
    return -1;
}
int ksmallest(int arr[], int n, int k) {
    unordered_set<int> set;
     
    for (int i = 0; i < n; i++) {
        set.insert(arr[i]);
    }
    int num = 1; 
    while (k > 0) {
        if (set.count(num)==1) {
            num++;
        } else {
            k--;
            num++;
        }
    }
    return num - 1;
}
int ksmallest(int arr[], int n, int k) {
    int max_num = *max_element(arr, arr + n);
     
    int* count = new int[max_num + 2]();
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    int num = 1; 
    while (k > 0) {
        if (count[num] > 0) 
            count[num]--;
            //decreament frequency
         else {
            k--;
         }
        num++;
    }
    delete[] count;
    return num - 1;
}
int main()
{
    int k = 1;
    int arr[] = {2, 3, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << ksmallest(arr, n, k) << endl;
    return 0;
}
