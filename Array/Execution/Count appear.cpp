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
 
    // Initializing first row with all 1s. An empty string is subsequence of all.
    for (int j = 0; j <= n; j++)
        mat[0][j] = 1;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
 
            // If last characters don't match, then value
            // is same as the value without last character in S.
            if (T[i - 1] != S[j - 1])
                mat[i][j] = mat[i][j - 1];
 
            // Else value is obtained considering two cases.
            // a) All substrings without last character in S
            // b) All substrings without last characters in both.
            else
                mat[i][j] = mat[i][j - 1] + mat[i - 1][j - 1];
        }
    }
    for (int i = 1; i <= m; i++, cout << endl)
        for (int j = 1; j <= n; j++)
            cout << mat[i][j] << " ";  
    //return mat[m][n];
}
int f(int i, int j, string s, string t, vector<vector<int>>& dp) {
    // If remaining characters in t are less than remaining characters in s, not possible to form a subsequence
    if (t.size() - j > s.size() -i)
        return 0;
    //If we have reached the end of string t, we have found a valid subsequence
    if (j >= t.size()) {
        return 1;
    }
    // If we have reached the end of string s, but not the end of t, return 0
    if (i >= s.size()) {
        return 0;
    }
    //If the result for the current indices is already computed, return that value
    if (dp[i][j] != -1) {
        return dp[i][j];
    }
    // If the characters at the current indices match
    if (s[i] == t[j]) 
    {
        //Recursively call f for the next indices in both s and t
        // Add the counts of subsequences including and excluding the current character in s
        return dp[i][j] = f(i + 1, j + 1, s, t, dp) + f(i + 1, j, s, t, dp);
    }
    // If the characters don't match, only exclude the current character from s and move to the next index in s
    return dp[i][j] = f(i + 1, j, s, t, dp);
}
int findSubsequenceCount(string s, string t) {

    vector<vector<int>> dp(s.size(), vector<int>(t.size(), -1));
    // Call the recursive function f with initial indices set to 0, 0. dp is the vector name.
    return f(0, 0, s, t, dp);
}
int main()
{
    string T = "ge";
    string S = "geeksforgeeks";
     findSubsequenceCount(S, T);
    return 0;
}
