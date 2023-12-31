//choose item from n items.weight of a knapsack is W.find how many items you can choose.
#include<bits/stdc++.h>
using namespace std;
const int N=102;
const int M=1e6;
long long dp[N][M];
int wt[N],val[N];

int main()
{
    int n,cap;
    cin>>n>>cap;
    for(int i=1;i<=n;i++)
    {
        cin>>wt[i]>>val[i];
    }
    for(int i=0;i<=cap;i++)
    {
        dp[0][i]=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0; j<=cap; j++)
        {
            if(j<wt[i])
            {
                dp[i][j]=dp[i-1][j];
            }
            else
            {
                dp[i][j]=max(val[i]+dp[i-1][j-wt[i]], dp[i-1][j]);
            }
        }
    }
    cout<<dp[n][cap];
}
