class Solution {
public:
    string decodeMessage(string key, string message) {
         unordered_map<char,char> mapping;
         char space = ' ';
         mapping[space] = space;
         char start = 'a';
         int index = 0;
         while(start <= 'z' && index <key.length()){
            char keycurrentcharacter = key[index];
            // start -> mapping abcde....
            // mapping -> keycurrentcharacter -> alphabet
            if(mapping.find(keycurrentcharacter)!=mapping.end()) {
                // agar current caracter ki mapping already present hai
                // no need to store any mapping 
                index++;
            }
            else {
                // already present nahi hai
                // create mapping and move ahead
                mapping[keycurrentcharacter]=start;
                start++;
                index++;
            }
         } 
        //  step2: use mapping and decode msg
        string ans ="";
        for(int i=0;i<message.length();i++){
            char msgcharacter = message[i];
            char mappedcharacter = mapping [msgcharacter];
            ans.push_back(mappedcharacter);
        }
        return ans;
    }
};