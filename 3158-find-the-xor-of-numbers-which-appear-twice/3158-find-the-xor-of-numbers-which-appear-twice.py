class Solution:
    def duplicateNumbersXOR(self, nums: List[int]) -> int:
        mp={}
        for val in nums:
            mp[val]=mp.get(val,0)+1
        ans = 0
        for keys,values in mp.items():
            if values == 2:
                ans ^= keys
        return ans