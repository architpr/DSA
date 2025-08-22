class Solution {
public:
    // int countSubstrings(string s) {
    //     int totalcount = 0;
    //     for(int center = 0;center<s.length();center++){
    //         int i=center;
    //         int j=center;
    //         int oddpalsubstringcount = expandaroundcenter(s,i,j);

    //         i = center;
    //         j = center+1;
    //         int evenpalsubstringcount =
    //     }
    // }

     int countSubstrings(string s) {
        int n = s.size();
        int count = 0;

        // Expand around each possible center
        for (int center = 0; center < 2 * n - 1; center++) {
            int left = center / 2;
            int right = left + (center % 2);

            while (left >= 0 && right < n && s[left] == s[right]) {
                count++;
                left--;
                right++;
            }
        }
        return count;
    }
};