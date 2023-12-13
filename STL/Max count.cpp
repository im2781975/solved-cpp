#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;
int main() {
    string text;
    cout << "Enter a text: ";
    getline(cin, text);

    map<string, int> wordCount;
    istringstream iss(text);
    string word;

    while (iss >> word) {
        // Remove punctuation and convert to lowercase (for case insensitivity)
        for (char &c : word) {
            if (ispunct(c)) {
                c = ' ';
            }
            else {
                c = tolower(c);
            }
        }
        wordCount[word]++;
    }
    int maxCount = 0;
    string maxWord = "";

    for (const auto& pair : wordCount) {
        if (pair.second > maxCount || (pair.second == maxCount && pair.first < maxWord)) {
            maxCount = pair.second;
            maxWord = pair.first;
        }
    }
    cout << "Maximum occurring word: " << maxWord << " (count: " << maxCount << ")\n";
    return 0;
}
