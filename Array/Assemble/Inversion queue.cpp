#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
 
int getNumOfInversions(vector<int>& A) {
    int N = A.size();
    if (N <= 1) {
        return 0;
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> sortList;
    int result = 0;
    for (int i = 0; i < N; i++) {
        sortList.push(make_pair(A[i], i));
    }
 
    // Create a sorted list of indexes
    vector<int> x;
    while (!sortList.empty()) {
 
        int v = sortList.top().first;
        int i = sortList.top().second;
        sortList.pop();
 
        // Find the current minimum's index the index y can represent how many minimums on the left
        int y = upper_bound(x.begin(), x.end(), i) - x.begin();
        //return maximum value index;
 
        // i can represent how many elements on the left
        // i - y can find how many bigger nums on the left
        result += i - y;
 
        x.insert(upper_bound(x.begin(), x.end(), i), i);
    }
    return result;
}
int main() {
    vector<int> A{1, 20, 6, 4, 5};

    int result = getNumOfInversions(A);
    cout << "\nNumber of inversions are " << result ;
    return 0;
}
