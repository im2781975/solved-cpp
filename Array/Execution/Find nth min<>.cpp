//find the K-th smallest element
#include <iostream>
#include <unordered_set>
using namespace std;
 
int findKthSmallestNumber(int arr[], int n, int k) {
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
    // Subtract 1 to get the k-th smallest number
}
int main() {
    int arr[] = {1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
     
    int kthSmallest = findKthSmallestNumber(arr, n, k);
    cout << "K-th smallest number: " << kthSmallest << endl;
    return 0;
}
