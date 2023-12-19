#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isValidBracketSequence(const string &sequence) {
    stack<char> stack;

    for (char bracket : sequence) {
        if (bracket == '(' || bracket == '[' || bracket == '{') {
            stack.push(bracket);
        } else if (bracket == ')' || bracket == ']' || bracket == '}') {
            if (stack.empty()) {
                return false;
            }

            char top = stack.top();
            stack.pop();

            if ((bracket == ')' && top != '(') ||
                (bracket == ']' && top != '[') ||
                (bracket == '}' && top != '{')) {
                return false;
            }
        }
    }

    return stack.empty();
}
bool valid(string s) {
    stack<char> st;

    for (int i = 0; i < s.size(); i++) {
        char br = s[i];
        switch (br) {
            case '(':
            case '{':
            case '[':
                st.push(br);
                break;
            case ')':
            case '}':
            case ']':
                if (st.empty() || (br == ')' && st.top() != '(') || (br == '}' && st.top() != '{') || (br == ']' && st.top() != '[')) {
                    return false;
                }
                st.pop();
                break;
        }
    }
    return st.empty();
}

int main() {
    string n;
    cin >> n;
    if (valid(n))
        cout << "Yes";
    else
        cout << "No";
    if (isValidBracketSequence(n)) {
        cout << "Yes" ;
    } else {
        cout << "No" ;
    }
    return 0;
}

