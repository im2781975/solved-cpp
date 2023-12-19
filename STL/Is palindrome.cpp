#include <iostream>
#include <deque>
#include <string>
using namespace std;

bool isPalindrome(const string& input) {
    deque<char> dq;
    
    for(int i=0; i<dq.size(); i++)
    {
        dq.push_back(input[i]);
    }
    // Check if it's a palindrome
    while (dq.size() > 1) {
        if (dq.front() != dq .back()) {
            return false;
        }
        dq.pop_front();
        dq.pop_back();
    }
    return true; 
}
int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (isPalindrome(input)) {
        cout << "Yes" ;
    } else {
        cout << "No" ;
    }
    return 0;
}
