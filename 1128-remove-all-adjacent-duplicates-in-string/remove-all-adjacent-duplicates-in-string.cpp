class Solution {
public:
    string removeDuplicates(string s) {
    string ans = "";
    int n = s.length();

    for (int i=0;i<n;i++){
        char currcharacter = s[i];
        if(ans.empty()){
            ans.push_back(currcharacter);
        }
        else if (currcharacter == ans.back())
            {
                ans.pop_back();
        }
        else if (currcharacter != ans.back())
        {
            ans.push_back(currcharacter);            
        }

    }
    return ans;    
  }
};