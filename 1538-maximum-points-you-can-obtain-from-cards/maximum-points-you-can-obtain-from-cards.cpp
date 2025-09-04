class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int l = k - 1;
        
        int lsum = 0;
        int rsum = 0;
        int maxsum = 0;

        for (int i = 0; i <= l; i++) {
            lsum = lsum + cardPoints[i];
            maxsum = lsum;
        }
      int rindex = n-1;
        for (int i = l; i >= 0; i--) {
            lsum = lsum - cardPoints[i];
            rsum = rsum + cardPoints[rindex];
            rindex = rindex - 1;

            maxsum = max(maxsum, lsum + rsum);
        }
        return maxsum;

    }
};





