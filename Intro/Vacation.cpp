//count max happiness in  vacation days work which is 3.each two days work will not be same.
#include <bits/stdc++.h>
using namespace std;

const int N = 1005; // Adjust the size as needed

int happiness[N][4], dp[N][4];

int fun(int day, int task) {
    if (day == 1) {
        return happiness[day][task];
    }
    if (dp[day][task] != -1) {
        return dp[day][task];
    }
    int max_profit = 0;
    for (int last = 1; last <= 3; last++) {
        if (last != task) {
            int candidate_profit = fun(day - 1, last) + happiness[day][task];
            max_profit = max(max_profit, candidate_profit);
        }
    }
    dp[day][task] = max_profit;
    return max_profit;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 3; j++) {
            cin >> happiness[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 3; j++) {
            dp[i][j] = -1;
        }
    }
    int max_happiness = 0;
    for (int i = 1; i <= 3; i++) {
        max_happiness = max(max_happiness, fun(n, i));
    }
    cout << max_happiness << endl;
}
