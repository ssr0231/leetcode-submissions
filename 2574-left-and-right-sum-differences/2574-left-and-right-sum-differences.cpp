class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        vector<int> leftsum;
        vector<int> rightsum;

        int sum=0;
        leftsum.push_back(sum);
        for(int i=1;i<n;i++){
            sum+=nums[i-1];
            leftsum.push_back(sum);
        }
        int total_sum=sum+nums[n-1];
        sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            rightsum.push_back(total_sum-sum);
        }

        for(int i=0;i<n;i++){
            ans.push_back(abs(leftsum[i]-rightsum[i]));
        }

        return ans;

    }
};