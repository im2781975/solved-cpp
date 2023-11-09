#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
 
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}
 
vector<int> rangeLcmQueries(vector<int>& arr, vector<pair<int, int>>& queries) {
    vector<int> results;
    for (const auto& query : queries) {
        int l = query.first;
        int r = query.second;
        int lcmVal = arr[l];
        for (int i = l + 1; i <= r; i++) {
            lcmVal = lcm(lcmVal, arr[i]);
        }
        results.push_back(lcmVal);
    }
    return results;
}
 
int main() {
    vector<int> arr = {5, 7, 5, 2, 10, 12, 11, 17, 14, 1, 44};
    vector<pair<int, int>> queries = {{2, 5}, {5, 10}, {0, 10}};
    vector<int> results = rangeLcmQueries(arr, queries);
    for (const auto& result : results) {
        cout << result << " ";
    }
    cout << endl;
    return 0;
}
