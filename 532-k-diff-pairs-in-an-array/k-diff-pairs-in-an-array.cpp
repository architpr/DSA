class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n = nums.size();
        set <pair<int ,int >> uniquepairs;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
               if (abs(nums[i]-nums[j])==k ){
                int a = min(nums[i],nums[j]);
                int b = max(nums[i],nums[j]);
                uniquepairs.insert({a,b});
               }



                // int diff = abs(nums[i] - nums[j]);
                // if (diff == k) {
                //     count++;
                }
            }
            return uniquepairs.size();
        }

        
    
    
};
