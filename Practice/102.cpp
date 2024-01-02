#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int a= 0;
    vector<int>vec;
    while(n > 0)
    {
        a +=n;
        n /=2;
        vec.push_back(a);
    }
    for(int i=0; i<vec.size(); i++)
        cout<<vec[i]<<" ";
}
