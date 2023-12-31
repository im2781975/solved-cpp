#include <iostream>
#include <algorithm>
using namespace std;
 
int findKthSmallestNumber(int arr[], int n, int k) {
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
    return num - 1; // Subtract 1 to get the k-th smallest number
}
int main() {
    int arr[] = {1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
     
    int kthSmallest = findKthSmallestNumber(arr, n, k);
    cout << "K-th smallest number: " << kthSmallest << endl;
    return 0;
}
