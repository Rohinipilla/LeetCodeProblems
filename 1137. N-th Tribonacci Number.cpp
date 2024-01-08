class Solution {
public:

    int dpfib(int n, vector<int> & dp){
        if(n==0 || n==1 ){
            return n;
        }
        if(n==2){
            return 1;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n] = dpfib(n-1,dp)+ dpfib(n-2,dp) + dpfib(n-3,dp);

        return dp[n];
    } 

    int tribonacci(int n) {
        vector<int> dp(n+1,-1);
        int ans = dpfib(n,dp);
        return ans;
    }
};
