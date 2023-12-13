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

int main() {
    string input;
    cout << "Enter a bracket sequence: ";
    cin >> input;

    if (isValidBracketSequence(input)) {
        cout << "Yes" ;
    } else {
        cout << "No" ;
    }

    return 0;
}
