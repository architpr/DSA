class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
    bool found[1000] = {false}; // mark numbers formed
    int n = digits.size();

    for (int i = 0; i < n; i++) {
        if (digits[i] == 0) continue; // no leading zero

        for (int j = 0; j < n; j++) {
            if (j == i) continue;

            for (int k = 0; k < n; k++) {
                if (k == i || k == j) continue;

                if (digits[k] % 2 != 0) continue; // last digit must be even

                int num = digits[i] * 100 + digits[j] * 10 + digits[k];
                found[num] = true;
            }
        }
    }

    vector<int> ans;
    for (int num = 100; num <= 998; num += 2) {
        if (found[num]) ans.push_back(num);
    }

    return ans;
  }
};