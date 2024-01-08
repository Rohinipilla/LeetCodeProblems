class Solution {
public:

    int dpStairs(int n, vector<int> & dp){
        if(n==1 || n==2){
            return n;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n] = dpStairs(n-1,dp)+ dpStairs(n-2,dp);

        return dp[n];
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        int ans = dpStairs(n,dp);
        return ans;
        
    }
};
