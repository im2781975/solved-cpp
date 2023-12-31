#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    priority_queue<int> maxHeap;
    // Insert the first k elements into the max heap
    for (int i = 0; i < k; i++) {
        maxHeap.push(arr[i]);
    }
    
    // Find and print the largest k elements
    for (int i = k; i < n; i++) {
        if (arr[i] > maxHeap.top()) {
            maxHeap.pop();
            maxHeap.push(arr[i]);
        }
    }
    
    // Extract the largest k elements and print them in descending order
    vector<int> largestK;
    while (!maxHeap.empty()) {
        largestK.push_back(maxHeap.top());
        maxHeap.pop();
    }
    for (int i = k - 1; i >= 0; i--) {
        cout << largestK[i] << " ";
    }
    return 0;
}
