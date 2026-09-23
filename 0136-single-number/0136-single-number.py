class Solution:
    def singleNumber(self, nums: list[int]) -> int:
        ans = 0
        for val in nums:
            ans^=val
        return ans