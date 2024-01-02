#include<bits/stdc++.h>
using namespace std;

int n = 5;

int main()
{
    vector<int> v(n * n);
    
    for(int i = 0; i < n; i++)
        v.push_back(i);
    
    cout<<"\Elements of vector are: ";
    for(int i = 0; i < n; i++)
        cout << v[i] << " ";
        
    for(int i = 0; i < n*n; i++)
        v[i] = i;

    int sum=0;
    cout<<"\nSum of the vector are: ";
    for(int i=0 ; i<n*n ; i++)
        sum+= v[i];
    
    cout<<sum;
}

