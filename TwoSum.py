# Runtime: 498 ms
# Memory: 17.25 MB
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        length = len(nums)
        print (nums)
        for i in range(length):
            diff = target-nums[i]
            if diff in nums:
                j = nums.index(diff)
                if i == j:
                    continue
                return [i, j]
