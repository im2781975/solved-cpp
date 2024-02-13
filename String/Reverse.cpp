#include <bits/stdc++.h>
using namespace std;
int main() {
    string str = "Welcome to GFG";
    string result = "";
    // Splitting the string based on space
    istringstream ss(str);
    vector<string> words;
    do {
        string word;
        ss >> word;
        words.push_back(word);
    } while (ss);
    // Reverse each part and then join
    for (int i = 0; i < words.size() - 1; i++) {
        reverse(words[i].begin(), words[i].end());
        result += words[i] + ' ';
    }
    reverse(words.back().begin(), words.back().end());
    result += words.back();
 
    cout << result << endl;
    return 0;
}

