//count number of times S appears as a subsequence in T 
#include <bits/stdc++.h>
using namespace std;
 
int findSubsequenceCount(string S, string T)
{
    int m = T.length(), n = S.length();
 
    if (m > n)
        return 0;
 
    // mat[i][j] stores the count of occurrences of
    int mat[m + 1][n + 1];
 
    // Initializing first column with all 0s. An empty
    // string can't have another string as subsequence
    for (int i = 1; i <= m; i++)
        mat[i][0] = 0;
 
    // Initializing first row with all 1s. An empty
    // string is subsequence of all.
    for (int j = 0; j <= n; j++)
        mat[0][j] = 1;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
 
            // If last characters don't match, then value
            // is same as the value without last character
            // in S.
            if (T[i - 1] != S[j - 1])
                mat[i][j] = mat[i][j - 1];
 
            // Else value is obtained considering two cases.
            // a) All substrings without last character in S
            // b) All substrings without last characters in
            // both.
            else
                mat[i][j] = mat[i][j - 1] + mat[i - 1][j - 1];
        }
    }
    for (int i = 1; i <= m; i++, cout << endl)
        for (int j = 1; j <= n; j++)
            cout << mat[i][j] << " ";  
    //return mat[m][n];
}
int main()
{
    string T = "ge";
    string S = "geeksforgeeks";
     findSubsequenceCount(S, T);
    return 0;
}
