class Solution {
public:
    bool isPerfectSquare(int num) {
        
        int left=1,right=num;

        while(left<=right){
            long long mid = left +(right-left)/2;
            if(num==mid*mid){
                return true;
            }
            else if(num>mid*mid){
                left = mid+1;
            }
            else{
                right= mid-1;
            }

        }
        return false;
    }
};
