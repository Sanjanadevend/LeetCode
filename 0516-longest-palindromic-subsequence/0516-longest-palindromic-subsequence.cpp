class Solution {
public:
int LcsHelperFun(string& s, string& t, int n, int m,
                     vector<vector<int>>& dp) {
        if (n <= 0 || m <= 0) {
            return 0;
        }

        if (dp[n][m] != -1) {
            return dp[n][m];
        }

        if (s[n - 1] == t[m - 1]) {
            return dp[n][m] = 1 + LcsHelperFun(s, t, n - 1, m - 1, dp);
        }

        else {
            return dp[n][m] = max(LcsHelperFun(s, t, n - 1, m, dp),
                                  LcsHelperFun(s, t, n, m - 1, dp));
        }
    }
    int longestPalindromeSubseq(string s) {
        string t = s;
        reverse(t.begin(), t.end());


int n = s.length();
int m= t.length();
vector<vector<int>>dp(n+1, vector<int>(m+1, -1));
return LcsHelperFun(s,t,n,m,dp);


    


    }
};