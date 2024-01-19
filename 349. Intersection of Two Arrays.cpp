class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersect;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        int x=nums1.size();
        int y=nums2.size();

        int i=0,j=0;

        while(i<x && j<y){
            if(i>0 && nums1[i]==nums1[i-1]){
                i++;
                continue;
            }
            if(nums1[i]<nums2[j]){
                i++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else{
                intersect.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return intersect;
    }
};
