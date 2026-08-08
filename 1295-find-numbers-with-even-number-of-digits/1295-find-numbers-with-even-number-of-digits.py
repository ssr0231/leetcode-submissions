class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        n = len(nums)
        count = 0

        for i in range(n):
            dig = 0
            while(nums[i] > 0):
                nums[i]//=10
                dig+=1
            if(dig%2 == 0):
                count+=1
        return count