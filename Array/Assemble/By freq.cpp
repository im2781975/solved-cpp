#include <bits/stdc++.h>
using namespace std;
bool fcompare(pair<int, pair<int, int> > a,pair<int, pair<int, int> > b)
{
    if (a.second.second != b.second.second)
        return (a.second.second > b.second.second);
    else
        return (a.second.first < b.second.first);
}
void sortByFrequency(int arr[], int n)
{
    unordered_map<int, pair<int, int> > hash; // hash map
    for (int i = 0; i < n; i++) {
        if (hash.find(arr[i]) != hash.end())
            hash[arr[i]].second++;
        else
            hash[arr[i]] = make_pair(i, 1);
    }
    // Vector to store the Final Sortted order
    vector<pair<int, pair<int, int> > > b;
    for (auto it = hash.begin(); it != hash.end(); ++it)
        b.push_back(make_pair(it->first, it->second));
 
    sort(b.begin(), b.end(), fcompare);
 
    for (int i = 0; i < b.size(); i++) {
        int count = b[i].second.second;
        while (count--)
            cout << b[i].first << " ";
    }
}
int main()
{
    int arr[] = { 2, 5, 2, 6, -1, 9999999, 5, 8, 8, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    sortByFrequency(arr, n);
}
