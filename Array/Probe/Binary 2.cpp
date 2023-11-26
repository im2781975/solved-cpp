// working of binary_search()
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = { 10, 15, 20, 25, 30, 35 };

    if (binary_search(arr.begin(), arr.end(), 15))
        cout << "\n15 exists in vector";
    else
        cout <<"\n15 does not exist";

    if (binary_search(arr.begin(), arr.end(), 23))
        cout << "\n23 exists in vector";
    else
        cout << "\n23 does not exist";
}
