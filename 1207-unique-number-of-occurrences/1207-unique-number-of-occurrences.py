class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        mp={}
        for val in arr:
            mp[val]=mp.get(val,0)+1
        s=[]
        for key,val in mp.items():
            s.append(val)
        mp1={}
        for v in s:
            mp1[v]=mp1.get(v,0)+1
        for kk,va in mp1.items():
            if va>1:
                return False
        return True