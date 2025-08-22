class Solution {
public:
    // int removePalindromeSub(string s) {
        
    // }

     int removePalindromeSub(string s) {
        // Check if s is a palindrome
        int left = 0, right = s.size() - 1;
        while (left < right) {
            if (s[left] != s[right]) {
                return 2; // Not palindrome → needs 2 steps
            }
            left++;
            right--;
        }
        return 1; // Palindrome → 1 step
    }
};