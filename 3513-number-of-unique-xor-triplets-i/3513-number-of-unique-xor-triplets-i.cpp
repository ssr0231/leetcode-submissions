class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        /*unordered_set<int> st;
        int ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                for (int k = j; k < n; k++) {
                    int x = nums[i] ^ nums[j] ^ nums[k];
                    st.insert(x);
                }
            }
        }
        return st.size();*/
        
        int n = nums.size();
        if (n == 1) return 1;
        if (n == 2) return 2;

        int bits = 0;
        int temp = n;

        while (temp > 0) {
            bits++;
            temp /= 2;
        }

        return 1 << bits;
    }
};