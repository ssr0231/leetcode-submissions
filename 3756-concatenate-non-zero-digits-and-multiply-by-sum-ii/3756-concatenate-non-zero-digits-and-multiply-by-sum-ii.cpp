class Solution {
public:
    static const int MOD = 1e9 + 7;

    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {

        vector<int> pos;          // Original positions of non-zero digits
        vector<int> digit;        // Non-zero digits

        // Extract non-zero digits
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '0') {
                pos.push_back(i);
                digit.push_back(s[i] - '0');
            }
        }

        int n = digit.size();

        // If there are no non-zero digits
        if (n == 0) {
            return vector<int>(queries.size(), 0);
        }

        // pow10[i] = 10^i % MOD
        vector<long long> pow10(n + 1);
        pow10[0] = 1;
        for (int i = 1; i <= n; i++)
            pow10[i] = (pow10[i - 1] * 10) % MOD;

        // Prefix sum of digits
        vector<long long> prefSum(n);
        prefSum[0] = digit[0];
        for (int i = 1; i < n; i++)
            prefSum[i] = prefSum[i - 1] + digit[i];

        // Prefix number
        // Example:
        // digits = 1 2 3 4
        // prefNum = 1,12,123,1234
        vector<long long> prefNum(n);
        prefNum[0] = digit[0];
        for (int i = 1; i < n; i++) {
            prefNum[i] = (prefNum[i - 1] * 10 + digit[i]) % MOD;
        }
        
        vector<int> ans;

        for (auto &q : queries) {
            int l = q[0];
            int r = q[1];

            // First non-zero digit inside [l,r]
            int L = lower_bound(pos.begin(), pos.end(), l) - pos.begin();

            // Last non-zero digit inside [l,r]
            int R = upper_bound(pos.begin(), pos.end(), r) - pos.begin() - 1;

            // No non-zero digit
            if (L > R) {
                ans.push_back(0);
                continue;
            }
            // Sum of digits
            long long sum;
            if (L == 0)
                sum = prefSum[R];
            else
                sum = prefSum[R] - prefSum[L - 1];

            // Number formed by digits
            long long number;
            if (L == 0) {
                number = prefNum[R];
            } else {

                int len = R - L + 1;

                number = (
                    prefNum[R]
                    - (prefNum[L - 1] * pow10[len]) % MOD
                    + MOD
                ) % MOD;
            }
            ans.push_back((number * sum) % MOD);
        }
        return ans;
    }
};