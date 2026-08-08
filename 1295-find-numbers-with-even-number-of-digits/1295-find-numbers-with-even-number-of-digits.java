class Solution {
    public int findNumbers(int[] nums) {
        int n = nums.length;
        int count=0;
        for(int val:nums){
            int dig = 0;
            while(val>0){
                dig++;
                val/=10;
            }
            if(dig%2 == 0){
                count++;
            }
        }
        return count;
    }
}