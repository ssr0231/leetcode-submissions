class Solution:
    def sumCounts(self, nums: List[int]) -> int:
        ans = 0
        sub=[]
        for i in range(len(nums)):
            for j in range(i,len(nums)):
                sub.append(nums[j])
                ans += (len(set(sub))*len(set(sub)))
            sub.clear()

        return ans