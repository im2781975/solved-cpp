//A frog is currently on stone i.he can jump on stone i..i+2..i+k..here |hi-hj| will be incurred
//where j is the stone where landed.find minimum possible total cost reaching N stone.
#include<bits/stdc++.h>
using namespace std;
const int N=101;
const int INF=2e9;
int h[N],dp[N];
int n,k;

int stone(int i) {
    if(i == 1) 
        return 0;

    if(dp[i] != -1) 
        return dp[i];

    int ans = INF;
    for(int j = 1; j <= k; j++) {
        if(i - j >= 1) {
            int candidate_ans = stone(i - j) + abs(h[i] - h[i - j]);
            ans = min(ans, candidate_ans);
        }
    }
    dp[i] = ans;
    return ans;
}

int main() {
    cin >> n >> k;
    for(int i = 1; i <= n; i++) {
        cin >> h[i];
    }
    for(int i = 1; i <= n; i++) {
        dp[i] = -1;
    }
    cout << stone(n);
    return 0;
}
