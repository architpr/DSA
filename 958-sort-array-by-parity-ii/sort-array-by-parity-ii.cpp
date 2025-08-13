class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n= nums.size();
        vector<int> result(n);
        int evenpos = 0;
        int oddpos = 1;

        for (int i =0;i<n;i++){
            int num= nums[i];
            if (num%2==0){
                result[evenpos]=num;
                evenpos += 2;
            }else {
                result[oddpos]= num;
                oddpos += 2;
            }
        }
        return result;
    }

    // int main(){


    // }
};