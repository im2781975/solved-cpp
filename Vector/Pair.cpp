#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector< pair <int,int> > vect;
    int arr[] = {10, 20, 5, 40 };
    int arr1[] = {30, 60, 20, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    for (int i=0; i<n; i++)
        vect.push_back( make_pair(arr[i],arr1[i]) );
 
    for (int i=0; i<n; i++)
        cout << vect[i].first << " "<< vect[i].second <<"\n";
 
    return 0;
}
