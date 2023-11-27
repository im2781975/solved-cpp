#include <bits/stdc++.h>
using namespace std;
 
void CountTriangles(vector<int> A)
{
    int n = A.size();
    sort(A.begin(), A.end());
 
    int count = 0;
    for (int i = n - 1; i >= 1; i--) {
        int l = 0, r = i - 1;
        while (l < r) {
            if (A[l] + A[r] > A[i]) {
 
                // If it is possible with a[l], a[r] & a[i] then  also possible with a[l+1]..a[r-1], a[r] and a[i]
                count += r - l;
                r--;
            }
            else
            // if not possible check for higher values of arr[l]
                l++;
        }
    }
    cout << "No of possible solutions: " << count;
}
int main()
{
    vector<int> A = { 10, 21, 22, 100, 101, 200, 300 };
    CountTriangles(A);
}
