#include<bits/stdc++.h>
using namespace std;
void print(vector<int>vect)
{
    int n=vect.size();
    vector<int>u,d;
    for(int i=0; i<n; i++)
    {
        if(find(u.begin(),u.end(),vect[i])==u.end())
        {
            u.push_back(vect[i]);
        }
        else
        {
            d.push_back(vect[i]);
        }
    }
    for(int i=0; i<d.size(); i++)
    {
        cout<<d[i]<<" ";
    }
}
int main()
{
    int arr[]{1,2,3,2,5,7};
    int n=sizeof(arr)/ sizeof(arr[0]);
    vector<int>vect(arr,arr+n);
    print(vect);
}
