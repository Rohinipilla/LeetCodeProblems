class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median;

        vector<int> merge;

        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }

        sort(nums1.begin(),nums1.end());

        int x = nums1.size();
        int y = x/2;

        if(x%2==0){

            median = (nums1[y-1]+nums1[y])/2.0;

        }
        else{
            median = nums1[y];
        }

        return median;
        
    }
};
