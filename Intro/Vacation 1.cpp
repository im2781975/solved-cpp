//count max happiness in  vacation days work which is 3.each two days work will not be same.
#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
int happiness[N][4], dp[N][4];
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 3; j++) {
            cin >> happiness[i][j];
        }
    }
    for(int task=1;task<=3;task++) {
        dp[1][task]=happiness[1][task];
    }
    for(int day=2;day<=n; day++) {
        for(int cur_task=1; cur_task<=3; cur_task++) {
            int max_profit = 0;
            for (int last = 1; last <= 3; last++) {
                if (last != cur_task) { 
                    int cur_profit=dp[day-1][last]+happiness[day][cur_task];
                    max_profit=max(max_profit,cur_profit);
                }
            }
            dp[day][cur_task] = max_profit;
        }
    }
    int ans=max({dp[n][1],dp[n][2],dp[n][3]);
    cout<<ans;
}
