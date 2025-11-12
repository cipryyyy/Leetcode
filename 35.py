class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        left = 0
        right = len(nums)-1
        mid = (left+right)//2
        while right != left:
            val = nums[mid]
            if val == target: 
                break
            if val < target:
                left = mid+1
            if val > target:
                right = mid
            mid = (left+right)//2
        if target > nums[-1]:
            return mid+1
        return mid
