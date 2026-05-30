
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        length = len(nums)
        for i in range(length):
            diff = target-nums[i]
            if diff in nums:
                j = nums.index(diff)
                if i == j:
                    continue
                return [i, j]
