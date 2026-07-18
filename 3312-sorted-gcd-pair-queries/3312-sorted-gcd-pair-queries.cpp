class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int n = nums.size();
        int maxVal = nums[0];
        for(int val:nums){
            maxVal = max(maxVal,val);
        }

        unordered_map<int, int> freq;
        for(int x : nums){
            freq[x]++;
        }

        vector<long long> divisibleCount(maxVal + 1, 0);
        vector<long long> exactPairs(maxVal + 1, 0);

        for(int d = 1; d <= maxVal; d++){
            for(int multiple = d; multiple <= maxVal; multiple += d) {
                divisibleCount[d] += freq[multiple];
            }
        }

        for(int d = maxVal; d >= 1; d--){

            long long cnt = divisibleCount[d];
            exactPairs[d] = cnt * (cnt - 1) / 2;

            for(int multiple = 2 * d; multiple <= maxVal; multiple += d) {

                exactPairs[d] -= exactPairs[multiple];
            }
        }

        vector<long long> prefix(maxVal + 1, 0);
        for (int d = 1; d <= maxVal; d++) {
            prefix[d] = prefix[d - 1] + exactPairs[d];
        }

        vector<int> ans;

        for(long long q : queries){
            int gcdValue = lower_bound(prefix.begin() + 1,prefix.end(),q + 1) - prefix.begin();

            ans.push_back(gcdValue);

        }
        return ans;

    }
};