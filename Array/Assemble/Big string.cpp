#include<bits/stdc++.h>
using namespace std;
bool comp(const string &l, const string &r){
    if(l.size() == r.size()) return l < r;
    else return l.size() < r.size();
}
void ingsort(string *arr, int n) {
    vector <string> vec(arr, arr + n);
    sort(vec.begin(), vec.end(), comp);
    for(int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
}
int main(){
    string arr[] = {"54", "724523015759812365462", "870112101220845", "8723"};
    int n = sizeof(arr) / sizeof(arr[0]);
    ingsort(arr, n);
}
