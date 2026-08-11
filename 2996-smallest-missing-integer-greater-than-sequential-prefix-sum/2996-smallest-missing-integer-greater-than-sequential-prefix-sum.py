class Solution:
    def missingInteger(self, nums: List[int]) -> int:
        n = len(nums)
        
        sum = nums[0]
        j = 1
        while j<n and  nums[j] == nums[j-1]+1:
            sum+=nums[j]
            j+=1
        while sum in nums:
            sum+=1
        return sum
