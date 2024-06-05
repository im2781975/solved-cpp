#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
int main() {
    int n, m;
    cin >> n;
    vector<int> arr1(n);
    cin>>m;
    vector<int> arr2(m);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    unordered_set<int> set1(arr1.begin(), arr1.end());
    vector<int> result;

    for (int i = 0; i < m; i++) {
        if (set1.find(arr2[i]) != set1.end()) {
            result.push_back(arr2[i]);
        }
    }
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << " ";
        }
    }
    return 0;
}
