class Solution {
public:
    int dpfib(int n, vector<int> & dp){
        if(n==0 || n==1){
            return n;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n] = dpfib(n-1,dp)+ dpfib(n-2,dp);

        return dp[n];
    }
    int fib(int n) {
        vector<int> dp(n+1,-1);
        int ans = dpfib(n,dp);
        return ans;
    }
};
