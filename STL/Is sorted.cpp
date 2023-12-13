// is sorted or not
#include <iostream>
using namespace std;

bool Is_sorted(int a[], int n) {
    if (n == 1 || n == 0) {
        return true;
    }

    return a[n - 1] >= a[n - 2] && Is_sorted(a, n - 1);
}
bool is_sorted(int arr[], int n) {
    if (n == 0 || n == 1)
        return true;
 
    for (int i = 1; i < n; i++)
        if (arr[i - 1] > arr[i])
            return false;
 
    return true;
}
int main() {
    int A[] = {20, 23, 23, 45, 78, 88};
    
    int range1 = 3;
    int range2 = 4;
 
    if (is_sorted(A, range1)) {
        cout << "\nSorted in the range : " << range1 ;
    } else {
        cout << "\nNot Sorted in the range : " << range1;
    }
    int n = sizeof(A) / sizeof(A[0]);
     
    if (Is_sorted(A, n) || is_sorted(A, n))
        cout << "\nYes";
    else
        cout << "\nNo";

    return 0;
}
