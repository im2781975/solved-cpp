// find k numbers with most occurrences in the given array
#include <bits/stdc++.h>
using namespace std;
vector<int>print_N_mostFrequentNumber(vector<int>& nums,int k,
    vector<int>& out)
{
    // map for counting the number of occurences
    unordered_map<int, int> counts;
    // stroing the frequency of each element
    for (int num : nums)
        ++counts[num];
    // creating a vector for storing the frequency
    vector<pair<int, int> > freqs;
    for (auto vt : counts)
        freqs.push_back({ vt.second, vt.first });
    // using the user defined function nth_element to extract the values
    nth_element(freqs.begin(), freqs.end() - k,freqs.end());
    // using user defined function transform to make the desired changes
    transform(freqs.end() - k, freqs.end(), out.begin(),
              [](pair<int, int> vt) { return vt.second; });
    // store the result in the out vector
    return out;
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