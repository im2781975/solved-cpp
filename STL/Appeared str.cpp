//given a list of strings. You need to output for each string the previous index where it appeared. If it didn’t occur previously then output -1.
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    map<string, int> mp;
    int n;
    cin >> n;
    string s;
    
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (mp.find(s) == mp.end()) {
             //if the string s is not in the map. If it's not present, output -1.
            cout << -1 << endl;
        } else {
            // Output the index where the string appeared.
            cout << mp[s] << endl;
        }
        // Update the last index of the string.
        mp[s]=i;
        //return the last location of the character.
    }
    return 0;
}
