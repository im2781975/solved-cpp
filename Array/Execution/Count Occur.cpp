//find k numbers with most occurrences in the given array
#include <bits/stdc++.h>
using namespace std;
// Comparison function to sort the 'freq_arr[]'
bool compare(pair<int, int> p1, pair<int, int> p2)
{
    // If frequencies of two elements are same then the larger number should come first
    if (p1.second == p2.second)
        return p1.first > p2.first;
 
    // Sort on the basis of decreasing order of frequencies
    return p1.second > p2.second;
}
// Function to print the k numbers with most occurrences
void print_N_mostFrequentNumber(int arr[], int N, int K)
{
    // unordered_map impose as frequency hash table
    unordered_map<int, int> mp;
    for (int i = 0; i < N; i++)
        mp[arr[i]]++;
 
    // store the elements of 'mp' in the vector 'freq_arr'
    vector<pair<int, int> > freq_arr(mp.begin(), mp.end());
 
    // Sort the vector 'freq_arr' on the basis of the 'compare' function
    sort(freq_arr.begin(), freq_arr.end(), compare);
 
    // display the top k numbers
    cout << K << " numbers with most occurrences are:\n";
    for (int i = 0; i < K; i++)
        cout << freq_arr[i].first << " ";
}
// Function to print the k numbers with most occurrences
void print_K_mostFrequentNumber(int arr[], int N, int K)
{
    // HashMap to store count of the elements
    unordered_map<int, int> elementCount;
    for (int i = 0; i < N; i++) {
        elementCount[arr[i]]++;
    }
 
    // Array to store the elements according to their frequency
    vector<vector<int> > frequency(N + 1);
    // Inserting elements in the frequency array
    for (auto element :elementCount) {
        frequency[element.second].push_back(element.first);
    }
    int count = 0;
    cout << K << " numbers with most occurrences are:\n";
 
    for (int i = frequency.size() - 1; i >= 0; i--) {
 
        // if frequency is same,then take number with a larger value
        // so,if more than 1 number present with same frequency,then sort frequency[i] in descending order
        if (frequency[i].size() > 1) {
            sort(frequency[i].begin(), frequency[i].end(),greater<int>());
        }
        for (auto element : frequency[i]) {count++;
            cout << element << " ";
 
            // if K elements have been printed
            if (count >= K)
                return;
        }
    }
    return;
}
vector<int>print_N_mostFrequentNumbers(vector<int>& arr,int k,
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
    int arr[] = { 3, 1, 4, 4, 5, 2, 6, 1 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int K = 2;
    print_N_mostFrequentNumber(arr, N, K);
    print_K_mostFrequentNumber(arr, N, K);
    vector<int> vec{ 3, 1, 4, 4, 5, 2, 6, 1 };

    vector<int> ans(K);
    print_N_mostFrequentNumbers(vec, K, ans);
    cout << K<< " numbers with most occurences are : " << endl;
    for (int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i] << " ";
    }
    return 0;
}
