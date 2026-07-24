class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

        vector<vector<int>> ans(2);
        unordered_map<int,int> mp1,mp2;
        
        for(int val:nums1){
            mp1[val]++;
        }
        for(int val:nums2){
            mp2[val]++;
        }
        for(auto &p : mp1){
            if(mp2.count(p.first) == 0)
                ans[0].push_back(p.first);
        }

        for(auto &p : mp2){
            if(mp1.count(p.first) == 0)
                ans[1].push_back(p.first);
        }

        return ans;

    }
};