class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;

          int  sum=0;

        for (int i=0;i<n;i++){
            // for(int j=i;j<n;j++){
                if (sum<0){
                    sum=0;
                }
                
            sum+=nums[i];  
            maxi = max(maxi,sum);
                       
            
        }return maxi;
    }
};