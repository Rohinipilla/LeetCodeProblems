class Solution {
public:
    bool isPalindrome(int x) {

        long int res = 0, num = x;
        while (num != 0) {

            res = res * 10 + (num % 10);
            num = num / 10;
        }

        if (res != x || x < 0) {
            return false;
        } else {
            return true;
        }
    }
};
