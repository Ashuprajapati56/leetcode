class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        long long temp = 0;

        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        while (x > 0) {
            int sum = x % 10;
            temp = temp * 10 + sum;
            x = x / 10;
        }

        if (temp == original) {
            return true;
        }

        return false;
    }
};