#include<bits/stdc++.h>
using namespace std;
int digit(int x)
{
    int cnt=0;
    while(x!=0)
    {
        x/=10;
        cnt++;
    }
    return cnt;
}
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0; i<a.size(); i++)
        cin>>a[i];
    
    for(int i=0; i<b.size(); i++)
        cin>>b[i];
        
    priority_queue<int>p;
    priority_queue<int>q;
    
    for(int i=0; i<n; i++)
        p.push(a[i]);
    
    for(int i=0; i<n; i++)
        q.push(b[i]);
    
    int ans=0;
    while(p.size() && q.size())
    {
        int x=p.top();
        int y=q.top();
    
        if(x==y)
        {
            p.pop();
            q.pop();
            continue;
        }
        ans++;
        if(x >y)
        {
            p.pop();
            p.push(digit(x));
        }
        else
        {
            q.pop();
            q.push(digit(y));
        }
    }
    cout<<ans;
}
