class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size();
        int l = 0, h = n - 1;
        int m = (l+h)/2;
        while (l <= h) {

            if (nums[m] == target)
                return m;

            else if (nums[m] < target) {
                l = m + 1;
            } else {
                h = m - 1;
            }
            m=(l+h)/2;
        } 
        return -1;
    }
};