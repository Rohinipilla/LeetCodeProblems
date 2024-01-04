class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int ind=digits.size()-1;
        digits[ind]++;

        while(digits[ind]>9){
            digits[ind] = 0;
            ind--;
            if (ind < 0) {  
                digits.insert(digits.begin(), 1);
                break;  
            }
            digits[ind]++;
        }

        return digits;
    }
};
