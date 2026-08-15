class Solution:
    def findClosestElements(self, arr: List[int], k: int, x: int) -> List[int]:
        temp = []
        for num in arr:
            temp.append((abs(num - x), num))
        temp.sort()
        ans = []
        for i in range(k):
            ans.append(temp[i][1])
        ans.sort()

        return ans
        