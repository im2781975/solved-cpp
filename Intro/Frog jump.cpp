//A frog is currently on stone i.he can jump on stone i+1 or i+2.here |hi-hj| will be incurred 
//where j is the stone where landed.find minimum possible total cost reaching N stone.
#include<bits/stdc++.h>
using namespace std;
const int N=101;
int h[N],dp[N];

int stone(int n)
{
    if(n==1)return 0;
    
    if(dp[n]!=-1)return dp[n];
    int x=stone(n-1)+abs(h[n]-h[n-1]);
    if(n==2)
    {
        dp[n]=x;
        return x;
    }
    int y=stone(n-2)+abs(h[n]-h[n-2]);
    int ans=min(x,y);
    dp[n]=ans;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>h[i];
        
    for(int i=1; i<=n; i++)
        dp[i]=-1;
        
    cout<<stone(n);
}
