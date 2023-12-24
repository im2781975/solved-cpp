// find k numbers with most occurrences in the given array
#include <bits/stdc++.h>
using namespace std;
vector<int>print_N_mostFrequentNumber(vector<int>& arr,int k,
    vector<int>& ans)
{
    unordered_map<int,int>mp;
    for(int i=0; i<arr.size(); i++)
    {
        mp[arr[i]]++;
    }
    vector<pair<int, int>>freq;
    for(auto it=mp.begin(); it!=mp.end(); it++)
    {
        freq.push_back({it->second,it->first});
    }
    nth_element(freq.begin(), freq.end()-k, freq.end());
    
    transform(freq.end()-k,freq.end(),ans.begin(),[](pair<int, int>vec){return vec.second;});
    
    return ans;
}
int main()
{
    vector<int> arr{ 3, 1, 4, 4, 5, 2, 6, 1 };
    int K = 2;

    vector<int> ans(K);
    print_N_mostFrequentNumber(arr, K, ans);
    cout << K<< " numbers with most occurences are : " << endl;
    for (int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i] << " ";
    }
    return 0;
}
