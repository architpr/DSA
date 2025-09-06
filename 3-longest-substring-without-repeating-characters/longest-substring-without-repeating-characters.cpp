class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int maxl = 0;
        int  n = s.size();
        int i=0,j=0;
        while(j<n){
            if(seen.find(s[j])==seen.end()){
                seen.insert(s[j]);
                maxl = max(maxl,j-i+1);
                j++;
            }

            else{
                seen.erase(s[i]);
                i++;
            }
        }
          return maxl;
    }    
};