class Solution:
    def firstStableIndex(self, nums: list[int], k: int) -> int:
        for i in range(0,len(nums)):
            mx = float('-inf')
            mn = float('inf')
            for j in range(0,i+1):
                mx = max(mx,nums[j])
            for l in range(i,len(nums)):
                mn = min(mn,nums[l])
            diff = mx-mn
            if diff<=k:
                return i 
        return -1