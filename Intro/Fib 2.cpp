#include<bits/stdc++.h>
using namespace std;
const int N=101;
int dp[N];
int Fib(int n)
{
    if(n <=2)
        return 1;
    if(dp[n]!= -1)
        return dp[n];
    
    int ans=Fib(n-1)+ Fib(n-2);
    dp[n]= ans;
    return ans;
}
int main()
{
    int n;
    cin>> n;
    for(int i=1; i<=n; i++)
        dp[i]=-1;
    
    cout<< Fib(n)<< " ";
}
