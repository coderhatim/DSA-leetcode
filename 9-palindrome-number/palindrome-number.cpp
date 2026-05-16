class Solution {
public:
    bool isPalindrome(int x) {
        // negative numbers and numbers ending in 0
        // (except 0 itself) cannot be palindrome
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;

        int rev = 0;

        while (x > rev) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }

        return (x == rev || x == rev / 10);
    }
};