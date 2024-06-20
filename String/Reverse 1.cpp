#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
string makeReverse(string str)
{
    reverse(str.begin(), str.end());
    istringstream iss(str);
    string word;
    string reverse;
    while (iss >> word) {
        reverse = word + " " + reverse;
    }
    return reverse;
}
// reverses individual words of a string
void reverseWords(string str)
{
    stack<char> st;
    // Traverse given string and push all characters to stack until we see a space.
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] != ' ')
            st.push(str[i]);
        // When we see a space, we print contents of stack
        else {
            while (st.empty() == false) {
                cout << st.top();
                st.pop();
            }
            cout << " ";
        }
    }
    // Since there may not be space after last word.
    while (st.empty() == false) {
        cout << st.top();
        st.pop();
    }
}
//passing str by reference because be need to do changes in str  
//only not want to create any copy and when return it.
void the_helper(string &str){
    stack<char>s;
    for(auto it:str)
        s.push(it);
        
    str.clear();
    
    while(!s.empty())
    {
        str.push_back(s.top());
        s.pop();
    }
}
int main()
{
    string str = "Geeks for Geeks";
    cout << makeReverse(str) << "\n";
    reverseWords(str);
    the_helper(str);
    cout << "\nReversed string is : " << str;
}
