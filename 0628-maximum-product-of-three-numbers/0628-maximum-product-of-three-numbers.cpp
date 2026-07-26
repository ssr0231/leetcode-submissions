class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        /*int first = nums[0];
        int sec = nums[0];
        int third = nums[0];
        for(int i = 0;i<nums.size();i++){
            if(nums[i] > first){
                third = sec;
                sec = first;
                first = nums[i];
            }else if(nums[i] > sec){
                third = sec;
                sec = nums[i];
            }else if(third < nums[i]){
                third = nums[i];
            }
        }
        return first * sec * third;*/
        sort(nums.begin(), nums.end());

        int n = nums.size();

        return max(nums[n-1] * nums[n-2] * nums[n-3],
                   nums[0] * nums[1] * nums[n-1]);
    }
};