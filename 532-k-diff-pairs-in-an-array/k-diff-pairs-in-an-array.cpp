class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if (k < 0) return 0; // difference cannot be negative

        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        int count = 0;
        for (auto &p : freq) {
            if (k == 0) {
                // count numbers that appear more than once
                if (p.second > 1) count++;
            } else {
                // check if num + k exists
                if (freq.count(p.first + k)) count++;
            }
        }
        return count;
    }
};