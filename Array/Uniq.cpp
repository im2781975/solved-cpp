#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> vect(n);
    
    for (int i = 0; i < n; i++) {
        cin >> vect[i];
    }
    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        if (mp.find(vect[i]) != mp.end()) {
            // Found a duplicate element
            cout << vect[i] << " is the first duplicate element at index " << mp[vect[i]] ;
            break;
        }
        mp[vect[i]] = i;
    }
    return 0;
}
