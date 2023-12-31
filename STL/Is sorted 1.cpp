// is_sorted
#include <iostream>
#include <algorithm>
using namespace std;
 
bool ignore_case(char a, char b)
{
    return (tolower(a) <= tolower(b));
}
bool check_if_sorted(string str)
{
    return is_sorted(str.begin(), str.end(), ignore_case);
}
int main()
{
    string str = "toY";
    if (check_if_sorted(str)) {
        cout << "Sorted";
    }
    else {
        cout << "Not sorted";
    }
    return 0;
}
