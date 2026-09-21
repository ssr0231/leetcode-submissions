class Solution:
    def countPartitions(self, nums: List[int]) -> int:
        total_sum = sum(nums)
        count = 0
        pre_sum = 0
        suff_sum = 0

        for i in range(0,len(nums)-1):
            pre_sum += nums[0]
            suff_sum = total_sum - pre_sum
            
            if abs(pre_sum - suff_sum)%2==0:
                count+=1

        return count