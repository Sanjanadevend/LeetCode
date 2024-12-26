class Solution {
public:
//by memoization
    // int LcsHelperFun(string& s, string& t, int n, int m,
    //                  vector<vector<int>>& dp) {
    //     if (n <= 0 || m <= 0) {
    //         return 0;
    //     }

    //     if (dp[n][m] != -1) {
    //         return dp[n][m];
    //     }

    //     if (s[n - 1] == t[m - 1]) {
    //         return dp[n][m] = 1 + LcsHelperFun(s, t, n - 1, m - 1, dp);
    //     }

    //     else {
    //         return dp[n][m] = max(LcsHelperFun(s, t, n - 1, m, dp),
    //                               LcsHelperFun(s, t, n, m - 1, dp));
    //     }
    // }
    int minDistance(string s, string t) {
        int n = s.length();
        int m = t.length();
        // vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
        // int x= LcsHelperFun(s, t, n, m, dp);
        // return (n+m) - (2*x);
// ____________________________________________
// by tabulation
     
    //  creating dp table
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        
for(int i = 1; i<= n; i++)
{
    for(int j=1; j<=m; j++)
    {
        if(s[i-1] == t[j-1])
        {
            dp[i][j] =1+ dp[i-1][j-1];
        }
        else
        {
             dp[i][j] =max ( dp[i-1][j], dp[i][j-1]);
        }
    }
}
int x= dp[n][m];//return the length of lcs

return (n-x) + (m-x);

    }
};