#include<bits/stdc++.h>
using namespace std;
bool countmatching(vector<int>vec, int l, int r, int trg)
{
    int cnt = 0;
    int mid = l + (r - l)/2;
    if(r - l < 2)
    {
        if(vec[l] == trg)
            cnt++;
        if(vec[r] == trg && l!= r)
            cnt++;
        return cnt;
    }
    else if(vec[mid] == trg)
    {
        return countmatching(vec, l, mid-1, trg) + 1 + countmatching(vec, mid + 1, r, trg);
    }
    else if(vec[mid] < trg)
        return countmatching(vec, mid + 1, r, trg);
    else
        return countmatching(vec, l, mid-1, trg);
}
int main()
{
    int n; cin >> n;
    vector <int> vec(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    int trg;
    cin >> trg;
    sort(vec.begin(), vec.end());
    if(countmatching(vec, 0, vec.size() -1, trg) > 0)
        cout << "Yes," << trg << " is present in the arr";
    else
        cout << "No,trg isn't present";
}
