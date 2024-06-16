#include <iostream>
#include <stack>
class Reverse {
    public:
    // function to reverse the individual words
    string reverse(string str) {
        // create a stack to access the string from end
        stack<char> s;
        // push all the characters of the stack
        for (int i = 0; i < str.length(); i++)
            s.push(str[i]);
        // rev string to store the required output
        string rev = "";
        string temp = "";
        // till the stack becomes empty
        while (!s.empty()) {
            // if top of the stack is a letter, then append it to temp;
            if (isalpha(s.top()))
                temp += s.top();
            // if it is a space, then append space to rev & also temp to rev
            else {
                rev = " " + temp + rev;
                // make the temp empty
                temp = "";
            }
            s.pop();
        }
        // if temp is not empty, add temp to rev at the front
        if (!temp.empty())
            rev = temp + rev;
        // return the output string
        return rev;
    }
};
int main() {
    string str = "Geeks for Geeks";
 
    Reverse obj;
    cout << obj.reverse(str) << "\n";
    return 0;
}
