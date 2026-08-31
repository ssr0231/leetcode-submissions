# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def nodesBetweenCriticalPoints(self, head: Optional[ListNode]) -> List[int]:
        prev = head
        cur = head.next
        index = 1
        points = []

        while cur.next:
            aft = cur.next

            if (cur.val > prev.val and cur.val > aft.val) or (cur.val < prev.val and cur.val < aft.val):
                points.append(index)

            prev = cur
            cur = aft
            index += 1

        if len(points) < 2:
            return [-1, -1]

        min_dis = float('inf')

        for i in range(1, len(points)):
            min_dis = min(min_dis, points[i] - points[i-1])

        max_dis = points[-1] - points[0]

        return [min_dis, max_dis]