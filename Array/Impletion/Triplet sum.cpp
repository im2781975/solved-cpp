#include <bits/stdc++.h>
using namespace std;
// returns true if there is triplet with sum equal 
// to 'sum' present in A[]. Also, prints the triplet 
bool find3Numbers(int A[], int n, int sum) 
{
    // Fix the first element as A[i] 
    for (int i = 0; i < n - 2; i++)
    { 
        for (int j = i + 1; j < n - 1; j++)
        { 
            // Now look for the third number 
            for (int k = j + 1; k < n; k++)
            { 
                if (A[i] + A[j] + A[k] == sum)
                { 
                    cout << "Triplet is " << A[i] <<
                        ", " << A[j] << ", " << A[k]; 
                    return true; 
                } 
            } 
        } 
    } 
    return false; 
} 
bool find3Numbers(int A[], int n, int sum)
{
    for (int i = 0; i < n - 2; i++) {
        unordered_set<int> s;
        // Calculate the current sum needed to reach the target sum
        int curr_sum = sum - A[i];
        for (int j = i + 1; j < arr_size; j++) {
 
            // Calculate the required value for the second element
            int required = curr- A[j];
            // Check if the required value is present in the set
            if (s.find(required) != s.end()) {
                cout << A[i] << " " << A[j] << " " << 
                     required<< "\n";
                return true;
            }
            // Add the current element to the set for future complement checks
            s.insert(A[j]);
        }
    }
    return false;
}
bool find3Numbers(int A[], int n, int sum)
{
    int l, r;
    sort(A, A + n);
    for (int i = 0; i < n - 2; i++)
    {
        l = i + 1; 
        // index of the first element in the
        // remaining elements
        r = n - 1; 
        // index of the last element
        while (l < r) {
            if (A[i] + A[l] + A[r] == sum) {
                cout << A[i] << " " << A[l] << " " << A[r] << "\n";
                return true;
            }
            else if (A[i] + A[l] + A[r] < sum)
                l++;
            else 
            // A[i] + A[l] + A[r] > sum
                r--;
        }
    }
    return false;
}
int main() 
{ 
    int A[] = { 1, 4, 45, 6, 10, 8 }; 
    int sum = 22; 
    int n = sizeof(A) / sizeof(A[0]); 
    find3Numbers(A, n, sum); 
    return 0; 
} 
