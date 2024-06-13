//CSES
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int>coin(n);
    for(int i=0; i<n; i++)
        cin >> coin[i];
    vector<int>NumberOfCoin(x+1, INT_MAX);
    NumberOfCoin[0] = 0;
    for(int i=0; i<=x; i++)
    {
        for(int j=0; j<coin.size(); j++)
        {
            if(i - coin[j] >=0)
                NumberOfCoin[i]=min(NumberOfCoin[i],NumberOfCoin[i - coin[j]]+1);
        }
    }
    cout << NumberOfCoin[x];
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int>coin(n);
    vector<int>cnt(x + 1, INT_MAX);
    for(int i = 0; i < n; i++)
        cin >> coin[i];
        
    for(int i = 0; i <= x; i++)
    {
        for(int j = 0; j < coin.size(); j++)
        {
            if(i - coin[j] >=0)
                cnt[i] = min(cnt[i], cnt[i - coin[j] + 1]);
        }
    }
    cout << cnt[x];
}
