#include <bits/stdc++.h>
using namespace std;
const int N = 101;
const int M = 1e5;
int num[N];
int dp[N][M];

int main()
{
    int n, trg;
    cin >> n >> trg;
    for (int i = 1; i <= n; i++)
        cin >> num[i];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= trg; j++)
            dp[i][j] = 0;
    }
    dp[0][0] = 1; 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= trg; j++)
        {
            int a = dp[i - 1][j];
            if (j >= num[i])
            {
                int b = dp[i - 1][j - num[i]];
                int ans = a || b;
                dp[i][j] = ans;
            }
            else
                dp[i][j] = a;
        }
    }
    cout << dp[n][trg];
    return 0;
}
