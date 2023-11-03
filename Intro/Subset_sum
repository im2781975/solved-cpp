#include<bits/stdc++.h>
using namespace std;
const int N=101;
const int M=1e5;
int num[N];
int dp[N][M];

int subset_sum(int n, int trg)
{
    if (n == 0)
    {
        if (trg == 0)
            return 1;
        return 0;
    }
    if (dp[n][trg] != -1)
    {
        return dp[n][trg];
    }
    int a = subset_sum(n - 1, trg);
    if (trg < num[n])
    {
        dp[n][trg] = a;
        return a;
    }

    int b = subset_sum(n - 1, trg - num[n]);
    int ans = a || b;
    dp[n][trg] = ans;
    return ans;
}

int main()
{
    int n, trg;
    cin >> n >> trg;
    for (int i = 1; i <= n; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= trg; j++)
        {
            dp[i][j] = -1;
        }
    }
    cout << subset_sum(n, trg);
}

