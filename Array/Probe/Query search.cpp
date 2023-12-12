// takes an array of size n and q queries. For each query given a number. For each query you have to print ‘YES’ if the number is present in the array, otherwise print ‘No’.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin>> n;
    int arr[n+5];
    for(int i =0; i<n; i++)
    {
        cin >> arr[i];
    }
    cin >> q;
    sort(arr, arr+n);
    while(q--)
    {
        int k, low = 0, high= n-1,ans = -1, mid;
        cin >> k;
        while(low<=high)
        {

            mid = (low+high)/2;
            if(k>arr[mid])
            {
                low = mid+1;
            }
            else if(k<arr[mid])
            {
                high = mid-1;
            }
            else
            {
                ans = mid;
                break;
            }
        }
        if(ans == -1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
/*->5
6 3 2 1 8
4
1 5 2 9
YES NO YES NO */
