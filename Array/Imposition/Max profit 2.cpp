#include <bits/stdc++.h>
using namespace std;
 
int f(int idx, int buy, int prices[],vector<vector<vector<int> > >& dp, int cap, int n)
{
    if (cap == 0) {
        return 0;
    }
    if (idx == n) {
        return 0;
    }
    if (dp[idx][buy][cap] != -1) {
        return dp[idx][buy][cap];
    }
    int profit = 0;
    // you can either buy or not buy
    if (buy == 0) {
        dp[idx][buy][cap] = profit
            = max(-prices[idx]
         + f(idx + 1, 1, prices, dp, cap, n),f(idx + 1, 0, prices, dp, cap, n));
    }
    // you can either sell or not sell
    else {
        dp[idx][buy][cap] = profit = max (prices[idx]
         + f(idx + 1, 0, prices, dp, cap - 1, n),f(idx + 1, 1, prices, dp, cap, n));
    }
 
    return profit;
}
int maxtwobuysell(int prices[], int n)
{
    vector<vector<vector<int> > > dp( n, vector<vector<int> >(2, vector<int>(3, -1)));
    return f(0, 0, prices, dp, 2, n);
}
int main()
{
    int arr[] = { 2, 30, 15, 10, 8, 25, 80 };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << maxtwobuysell(arr, size);
    return 0;
}
