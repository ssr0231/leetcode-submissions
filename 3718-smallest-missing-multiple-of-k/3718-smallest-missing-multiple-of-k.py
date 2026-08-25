class Solution:
    def missingMultiple(self, nums: List[int], k: int) -> int:
        ans = k
        while ans in nums:
            ans+=k
        return ans