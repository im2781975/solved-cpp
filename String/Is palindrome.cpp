#include <iostream>
#include <string>
using namespace std;
bool is_palindrome(string str) {
    int n = str.size();
    int l = 0;
    int r = n - 1;
    while (l < r) {
        if (str[l] != str[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}
bool is_palindrome_recursive(string str) {
    if (str == "" || str.size() == 1) {
        return true;
    } else {
        int n = str.size();
        string small_str = str.substr(1, n - 2);
        return is_palindrome_recursive(small_str) && (str[0] == str[n - 1]);
    }
}
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (is_palindrome(str)) {
        cout << "Iterative: It's a palindrome!";
    } else {
        cout << "Iterative: It's not a palindrome!" ;
    }
    if (is_palindrome_recursive(str)) {
        cout << "Recursive: It's a palindrome!" ;
    } else {
        cout << "Recursive: It's not a palindrome!" ;
    }
    return 0;
}
