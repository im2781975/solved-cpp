// takes 2 sorted integer arrays as input, then merges the two arrays into one array sorted in non-increasing order in O(n+m)
#include<bits/stdc++.h>
using namespace std;
vector<int>merge_sort(vector<int>a, vector<int>b)
{
    vector<int>output;
    int idx1 = 0;
    int idx2 = 0;
    int n = a.size() + b.size();

    for(int i=0; i<n; i++)
    {
        if(idx1 == a.size())
        {
            output.push_back(b[idx2]);
            idx2++;
        }
        else if(idx2 == b.size())
        {
            output.push_back(a[idx1]);
            idx1++;
        }
        else if(a[idx1] < b[idx2])
        {
            output.push_back(b[idx2]);
            idx2++;
        }
        else
        {
            output.push_back(a[idx1]);
            idx1++;
        }
    }
    return output;
}
int main()
{
    int r, s, x;
    vector<int>p;
    vector<int>q;
    cin >> r;
    for(int i=0; i<r; i++)
    {
        cin >> x;
        p.push_back(x);
    }
    cin >> s;
    for(int i=0; i<s; i++)
    {
        cin >> x;
        q.push_back(x);
    }
    vector<int>ans = merge_sort(p, q);
    for(int i = 0; i<ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
