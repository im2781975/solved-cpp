#include<bits/stdc++.h>
using namespace std;

void bucketSort(int arr[], int n) {
    vector<int> b[n];

    for(int i = 0; i < n; i++) {
        int bi = arr[i]; // Adjust the bucket index as per your requirement
        b[bi].push_back(arr[i]);
    }

    int index = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < b[i].size(); j++) {
            arr[index++] = b[i][j];
        }
    }
}

int main() {
    int arr[] = {2, 1, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    bucketSort(arr, n);

    cout << "\nSorted Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

