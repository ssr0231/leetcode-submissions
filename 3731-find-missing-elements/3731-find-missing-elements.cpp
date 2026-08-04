class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        unordered_map<int,int> freq;
        for(int val:nums){
            freq[val]++;
        }
        for(int i=nums[0];i<nums[nums.size()-1];i++){
            if(freq[i] == 0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};