//A frog is currently on stone i.he can jump on stone i+1 or i+2.here |hi-hj| will be incurre
//where j is the strone where landed.find minimum possible total cost reaching N stone.
#include<bits/stdc++.h>
using namespace std;
const int N=101;
int h[N],dp[N];

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>h[i];
        
    dp[1]=0;
    for(int i=2; i<=n; i++)
    {
        int x=dp[i-1]+abs(h[i]-h[i-1]);
        if(i==2)
        {
            dp[i]=x;
            continue;
        }
        int y=dp[i-2]+abs(h[i]-h[i-2]);
        dp[i]=min(x,y);
    }
    cout<<dp[n];
}

