//how much steps u need, to go center 
of the matrix.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10][10];
    int i,j,x,y;
    int ox,oy,mx,my;
    int cnt=0;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(arr[i][j]==1)
            {
                ox=i;
                oy=j;
            }
            if(i==2 && j==2)
            {
                mx=i;
                my=j;
            }
        }
        cout<<"\n";
    }
            cout<<mx<<" "<<ox<<" "<<my<<" "<<oy<<"\n";
            
            cnt=abs(mx-ox)+abs(my-oy);
    cout<<cnt;
}
