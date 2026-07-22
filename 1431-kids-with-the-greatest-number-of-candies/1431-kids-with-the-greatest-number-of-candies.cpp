class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int mx = candies[0];
        for(int val:candies){
            if(val >= mx){
                mx=val;
            }
        }
        vector<bool> ans;
        for(int val:candies){
            if((val+extraCandies) >= mx){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};