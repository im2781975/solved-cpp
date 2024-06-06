#include <iostream>
#include <cmath>
#include <vector>
#include<algorithm>
using namespace std;
int bsearch(vector<int> A, int key)
{
    int n = (int)A.size();
    int lg = log2(n-1)+1;

    //while ((1 << lg) < n - 1)
        //lg += 1;
    int pos = 0;
    for (int i = lg ; i >= 0; i--) {
        if (A[pos] ==key)
            return pos;
 
        int idx = pos | (1 << i);
        //suppose pos is 5.Binary rep of 5 is 0101. shift 1 to the left by i(2):0010.after Bitwise OR(|) result will be:0111(7).
        // find the element in one direction and update position
        if ((idx < n) && (A[idx] <= key))
            pos = idx;
    }
    // if element found return pos otherwise -1
    return ((A[pos] == key) ? pos : -1);
}
int main(void)
{
    vector<int> arr = { -2, 10, 100, 250, 32315 };
    cout << bsearch(arr, 10) << endl;
    if (binary_search(arr.begin(), arr.end(), 15))
        cout << "\n15 exists in vector";
    else
        cout <<"\n15 does not exist";
    return 0;
}
