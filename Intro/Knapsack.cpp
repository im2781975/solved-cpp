//choose item from n items.weight of a knapsack is W.find how many items you can choose.
#include<bits/stdc++.h>
using namespace std;

const int N = 102;
const int M = 1e6;

long long dp[N][M];
int wt[N], val[N];

long long knapsack(int n, int cap) {
    if (n == 0) return 0;
    if (dp[n][cap] == -1) {
        return dp[n][cap];
    }
    if (cap < wt[n]) {
        long long ans = knapsack(n - 1, cap);
    }
    long long a = val[n] + knapsack(n - 1, cap - wt[n]);
    long long b = knapsack(n - 1, cap);
    int ans = max({a, b});
    dp[n][cap] = ans;
    return ans;
}

int main() {
    int n, cap;
    cin >> n >> cap;
    for (int i = 1; i <= n; i++) {
        cin >> wt[i] >> val[i];
    }
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= cap; j++) {
            dp[n][cap] = -1;
        }
    }
    cout << knapsack(n, cap);
}
