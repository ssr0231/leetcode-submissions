class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int val:nums){
            freq[val]++;
        }
        int ans=-1;

        if(k==1){
            for(int val:nums){
                if(freq[val]==1){
                    ans = max(ans,val);
                }
            }
            return ans;
        }else if(k==nums.size()){
            for(int val:nums){
                ans = max(ans,val);
            }
            return ans;
        }else{
            if(freq[nums[0]]==1 && freq[nums[nums.size()-1]]==1){
                return max(nums[0],nums[nums.size()-1]);
            }else if(freq[nums[0]]==1 && freq[nums[nums.size()-1]]>1){
                return nums[0];
            }else if(freq[nums[0]]>1 && freq[nums[nums.size()-1]]==1){
                return nums.back();
            }else{
                return ans;
            }
        }
        return -1;

    }
};