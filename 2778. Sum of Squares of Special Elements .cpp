class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum =0;
        int len = nums.size();
        for(int i=1;i<=len;i++){
            if(len%i==0){
                sum = sum + (nums[i-1]*nums[i-1]);
            }
        }
        return sum;
        
    }
};
