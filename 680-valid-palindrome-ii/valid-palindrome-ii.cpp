class Solution {
public:

    bool checkpalindrome(string str,int s,int e){
        while(s<=e){
            if(str[s]!= str[e]){
                return false;
            }
            else {
                s++;
                e--;
            }
        }
        return true;
    }

    bool validPalindrome(string s) {
       int len = s.size();
       int left =0 , right=len-1;
       while(left <= right ){
        if (s[left] == s[right]){
           left++;
           right--;
         }
         else{ 
            // (s[left] != s[right])
            bool ansone = checkpalindrome(s,left+1,right);
            bool anstwo = checkpalindrome(s,left,right-1);

            bool finalans = ansone || anstwo;
            return finalans;    
            
           }
       } 
       return true;
    }
};