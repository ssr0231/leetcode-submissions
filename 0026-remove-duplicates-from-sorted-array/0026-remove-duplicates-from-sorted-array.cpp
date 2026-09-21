class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> unique_nums(nums.begin(), nums.end());
        int k = unique_nums.size();
        int index = 0;
        for (int val : unique_nums) {
            nums[index++] = val;
        }
        return k;
    }
};