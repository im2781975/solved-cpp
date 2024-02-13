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
int main()
{
    string str = "Geeks for Geeks";
    cout << makeReverse(str) << "\n";
    return 0;
}
