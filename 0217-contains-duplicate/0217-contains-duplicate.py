class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        mp={}
        for val in nums:
            mp[val]=mp.get(val,0)+1
            if mp[val] > 1:
                return True
        return False
        