class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        map<int,int> freq;
        for(int val:nums){
            freq[val]++;
        }
        vector<int> ans;
        int max_freq=0;
        for(auto it:freq){
            max_freq=max(max_freq,it.second);
        }
        while(max_freq!=0){
            for(auto& it:freq){
                if(it.second!=0){
                    ans.push_back(it.first);
                    it.second--;
                }
            }
            max_freq--;
        }
        
        return ans;

    }
};