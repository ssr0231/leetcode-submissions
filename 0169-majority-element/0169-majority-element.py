class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        mp = {}
        for i in nums:
            mp[i]=mp.get(i,0)+1
        for key,val in mp.items():
            if val > len(nums)//2:
                return key
        return -1