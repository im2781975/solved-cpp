#include <bits/stdc++.h>
using namespace std;
#define ppi pair<int, int>
 
//comparator works in prority_queue only if they are a class which has operator() overloaded in it
class Compare {
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        // b is at top and a is at bottom
        // when freq same smaller val stays at top
        if (a.first == b.first)
        {    
            return a.second > b.second; 
        }
        return a.first< b.first; 
    }
};
void solve(vector<int>& arr)
{
    int N = arr.size();
    unordered_map<int, int> mpp;
    for (int a : arr) {
        mpp[a]++;
    }
    // max heap - as max wise freq elements is what needed
    priority_queue<ppi, vector<ppi>, Compare> maxH;
 
    for (auto m : mpp) {
        maxH.push({ m.second, m.first }); // freq, val
    }
    // now the max freq is at TOP of MAX heap
 
    int i = 0; 
    // to maintain index to copy
    while (maxH.size() > 0) {
        int val =maxH.top().second; // val
        int freq =maxH.top().first; // freq
 
        while (freq--) {
            // freq - those many times make a copy
            arr[i] = val;
            i++;
        }
        maxH.pop(); // heapify happens and next top freq element goes up
    }
}
int main()
{
    vector<int> vec{ 2, 5, 2, 8, 5, 6, 8, 8 };
    int n = vec.size();

    solve(vec);
 
    for (int i = 0; i < n; i++)
        cout << vec[i] << " ";
    cout << "\n";
    return 0;
}
