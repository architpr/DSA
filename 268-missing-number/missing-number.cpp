// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//     sort(nums.begin(),nums.end()); 
    
//     int n = nums.size();
//     int s = 0;
//     int e = n-1;
//     int mid = s+(e-s)/2;
     
//     while(s<=e){
//         if(nums[mid+1] - nums[mid]!=1){
//          return nums[mid]+1;   
//         }
        
//         if(nums[mid]-nums[mid-1]!=1){
//             return [mid]-1;
//         }
//         if (nums[mid]-nums[mid]!=0){
//             e = mid -1;
          
//         }
//          mid =s +(e - s)/2
       
//     }
//     return -1 ;
// };








class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums.size();
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > mid) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        
        return left;
    }
};