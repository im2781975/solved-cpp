#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int k=1;k<=n;k=k*2)
    {
	for(int i=1;i<=n;i++)
	{
	    cout<<k<<" "<<i<<"\n";
	}
    }
}
