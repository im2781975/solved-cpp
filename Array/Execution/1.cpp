#include<bits/stdc++.h>
using namespace std;
//find k numbers with most occurrences in the given array
void nfreq(int *arr, int n, int k){
    unordered_map <int, int> mp;
    for(int i = 0; i < n; i++) mp[arr[i]]++;
    vector <vector <int>> freq(n + 1);
    for(auto val : mp)
        freq[val.second].push_back(val.first);
    int cnt = 0;
    for(int i = freq.size() - 1; i >= 0; i--){
        if(freq[i].size() > 1)
            sort(freq[i].begin(), freq[i].end(), greater <int> ());
        for(auto val : freq[i]){
            cnt++; cout << val << " ";
            if(cnt >= k) return;
        }
    }
    return;
}
bool cmp(pair <int, int> x, pair <int, int> y){
    if(x.second == y.second) return x.first > y.first;
    return x.second > y.second;
}
void nfreq(int *arr, int n, int k){
    unordered_map <int, int> mp;
    for(int i = 0; i < n; i++) mp[arr[i]]++;
    vector <pair <int, int>> freq(mp.begin(), mp.end());
    sort(freq.begin(), freq.end(), cmp);
    for(int i = 0; i < k; i++) cout << freq[i].first << " ";
}
vector <int> nfreq(vector <int> vec, int k, vector <int> res){
    unordered_map <int, int> mp;
    for(int i = 0; i < vec.size(); ++i) mp[vec[i]]++;
    vector <pair <int, int >> freq;
    for(auto it = mp.begin(); it!= mp.end(); ++it)
        freq.push_back({it -> second, it -> first});
    nth_element(freq.begin(), freq.end() - k, freq.end());
    transform(freq.begin() - k, freq.end(), res.begin(), [](pair <int, int> vec){ return vec.second;});
    return res;
}
//count all possible triangles 
int cntTriangle(int *arr, int n){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++){
                if (arr[i] + arr[j] > arr[k] && arr[i] + arr[k] > arr[j]
                    && arr[k] + arr[j] > arr[i]) cnt++;
            }
        }
    }
    return cnt;
}
int cntTriangle(int *arr, int n){
    sort(arr, arr + n); int cnt = 0;
    for(int i = 0; i < n - 2; i++){
        int k = i + 2;
        for(int j = i; j < n; j++){
            while(k < n && arr[i] + arr[j] > arr[k]) k++;
            if(k > j) cnt += k - j + 1;
        }
    }
    return cnt;
}
int cntTriangle(vector <int> vec){
    int n = vec.size(), cnt = 0;
    sort(vec.begin(), vec.end());
    for(int i = n - 1; i >= 1; i--){
        int l = 0, r = i - 1;
        while(l < r){
            if(arr[l] + arr[r] > arr[i]) {
                cnt += r - l;
                r--;
            }
            else    l++;
        }
    }
    cout << cnt;
}
int main(){
    vector <int> vec{ 3, 1, 4, 4, 5, 2, 6, 1 };
    int k = 2;
    vector <int> res = nfreq(vec, k);
    for(int i = res.size() - 1; i >= 0; i--) cout << res[i] << " ";
}
