#include<bits/stdc++.h>
using namespace std;

int main() {
    int i, ans = 0;
    int n;
    cin >> n; 
    vector<int> arr;
    arr.resize(n);

    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    for (i = 0; i < n; i++) {
        if (i == 0) {
            ans++;
            continue;
        }
        if (arr[i] != arr[i - 1])
            ans++;
    }
    cout << ans << "\n";
    return 0;
}
