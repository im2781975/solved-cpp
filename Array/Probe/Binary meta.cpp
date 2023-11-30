#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int bsearch(vector<int> A, int key_to_search)
{
    int n = (int)A.size();
    // Set number of bits to represent largest array index
    int lg = log2(n-1)+1;
    //Assume n is 16.after subtraction n - 1 becomes 15. log2(15) is approximately 3.91.so lg will be 3.91+1=4.91
    // the value of lg indicates that, to represent indices up to 15 (assuming 0-based indexing), you would need at least 5 bits (since the closest integer greater than or equal to 4.91 is 5). This value is then used in the binary search algorithm to determine the number of iterations needed to search for a particular element.
    //while ((1 << lg) < n - 1)
        //lg += 1;
    int pos = 0;
    for (int i = lg ; i >= 0; i--) {
        if (A[pos] ==key_to_search)
            return pos;
 
        // Incrementally construct the index of the target value
        int new_pos = pos | (1 << i);
        //suppose pos is 5.Binary rep of 5 is 0101. shift 1 to the left by i(2):0010.after Bitwise OR(|) result will be:0111(7).
        // find the element in one direction and update position
        if ((new_pos < n) && (A[new_pos] <= key_to_search))
            pos = new_pos;
    }
    // if element found return pos otherwise -1
    return ((A[pos] == key_to_search) ? pos : -1);
}
int main(void)
{
    vector<int> A = { -2, 10, 100, 250, 32315 };
    cout << bsearch(A, 10) << endl;
 
    return 0;
}
