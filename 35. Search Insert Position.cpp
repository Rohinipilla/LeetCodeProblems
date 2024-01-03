class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int first=0;
        int last=nums.size();

        if(target>nums[last-1]){
            return last;
        }

        while(first<=last){
            int mid = (last+first)/2;

            if(nums[mid]==target){
                return mid;
            }

            if(nums[mid]>target){
                last = mid-1;
            }
            else{
                first= mid+1;
            }
        }
        return first;


        // Another Approach, time complexity O(n)
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]>=target){
        //         return i;
        //     }
        // }
        // return nums.size();
        
    }
};
