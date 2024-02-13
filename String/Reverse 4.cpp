#include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<stack>
using namespace std;
//passing str by reference because be need to do changes in str  only not want to create any copy and when return it.
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
int main() {
    string str = "GeeksQuiz";
    the_helper(str);
    cout << "\nReversed string is : " << str;
    return 0;
}

