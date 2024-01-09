class Solution {
public:
    int dpcost(vector<int>& cost,int n,vector<int>& dp){
        if(n<=1){
            return cost[n];
        }
        if(dp[n]!=-1){
            return dp[n];
        }

        dp[n]=cost[n]+ min(dpcost(cost,n-1,dp),dpcost(cost,n-2,dp));
        return dp[n];

    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n+1,-1);
        int ans = min(dpcost(cost,n-1,dp),dpcost(cost,n-2,dp));

        return ans;
    }
};
